#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt",
            "r", stdin);
    freopen("output.txt",
            "w", stdout);
#endif
    int t;
    cin >> t;
    for (int kk = 1; kk <= t; kk++)
    {
        int r, c;
        cin >> r >> c;
        int cnt = 0;
        vector<vector<char>> v(r, vector<char>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> v[i][j];
                if (v[i][j] == '^')
                {
                    cnt++;
                }
            }
        }

        if (r == 1 || c == 1)
        {
            if (cnt)
            {
                cout << "Case #" << kk << ": "
                     << "Impossible\n";
            }
            else
            {cout << "Case #" << kk << ": "
                     << "Possible\n";
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        cout << '.';
                    }
                    cout << "\n";
                }
            }
        }
        else
        {
            cout << "Case #" << kk << ": "
                 << "Possible"
                 << endl;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << '^';
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
