#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum;
        cin >> N >> sum;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int isValid = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        isValid = 0;
                    }
                }
            }
        }

        if (isValid == 0)
        {
            cout << "YES\n";
        }
        else
        {
             cout << "NO\n";
        }
        
    }

    return 0;
}