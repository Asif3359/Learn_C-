#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T; 
    while (T--)
    {
        int N;
        cin >> N;
        int even = 0, odd = 0;
        for (int i = 0; i < N; i++)
        { 
            int val;
            cin >> val;
            if (val % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            cout << "0" << endl;
        }
        else if (N % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs(even - odd) / 2 << endl;
        }
    }
}