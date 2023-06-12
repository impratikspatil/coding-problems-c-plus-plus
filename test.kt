class HomeFragment : Fragment() {

    private lateinit var timerTextView: TextView
    private lateinit var countdownTimer: CountDownTimer
    private lateinit var handler: Handler
    private lateinit var toggleVisibilityRunnable: Runnable

    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        val view = inflater.inflate(R.layout.fragment_home, container, false)

        timerTextView = view.findViewById(R.id.timerTextView)
        timerTextView.textSize = 16f // Adjust the text size as per your preference

        // Set the layout parameters for the timer TextView
        val layoutParams = RelativeLayout.LayoutParams(
            RelativeLayout.LayoutParams.WRAP_CONTENT,
            RelativeLayout.LayoutParams.WRAP_CONTENT
        )
        layoutParams.addRule(RelativeLayout.ALIGN_PARENT_TOP)
        layoutParams.addRule(RelativeLayout.ALIGN_PARENT_END)
        layoutParams.marginEnd = 16 // Adjust the margin as per your preference
        timerTextView.layoutParams = layoutParams

        // Initialize the handler and the runnable
        handler = Handler()
        toggleVisibilityRunnable = Runnable {
            timerTextView.visibility = if (timerTextView.visibility == View.VISIBLE) View.INVISIBLE else View.VISIBLE
            handler.postDelayed(toggleVisibilityRunnable, 2 * 60 * 1000) // Toggle visibility after every 2 minutes
        }

        startCountdownTimer() // Start the countdown timer

        return view
    }

    private fun startCountdownTimer() {
        val countdownDurationMillis: Long = 30 * 60 * 1000 // 30 minutes in milliseconds

        countdownTimer = object : CountDownTimer(countdownDurationMillis, 1000) {
            override fun onTick(millisUntilFinished: Long) {
                val minutes = (millisUntilFinished / 1000) / 60
                val seconds = (millisUntilFinished / 1000) % 60
                timerTextView.text = String.format("%02d:%02d", minutes, seconds)
            }

            override fun onFinish() {
                timerTextView.text = "00:00"
                // Countdown timer finished, perform any necessary actions
            }
        }

        countdownTimer.start()
    }

    override fun onResume() {
        super.onResume()
        // Start toggling the visibility after resuming the fragment
        handler.postDelayed(toggleVisibilityRunnable, 2 * 60 * 1000) // Initial delay of 2 minutes
    }

    override fun onPause() {
        super.onPause()
        // Stop toggling the visibility when the fragment is paused
        handler.removeCallbacks(toggleVisibilityRunnable)
    }

}