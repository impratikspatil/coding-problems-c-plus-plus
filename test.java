public class test{

     public static void main(String[] args) {
        System.out.println("hello");
    }
}


interface pratik
{

    int add(int x, int y);

    void sub();

    default void sum(int x,int y)
    {
        System.out.println(x+y);
    }

}