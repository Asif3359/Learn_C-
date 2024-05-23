#include <bits/stdc++.h>

using namespace std;

int main()
{
    char S[100001];

    while (cin.getline(S, 100001))
    {
        sort(S, S + strlen(S));
        int length = strlen(S);

        for (int i = 0; i < length; i++)
        {
            if (S[i] != ' ')
            {
                cout << S[i];
            }
        }

        cout << endl;
    }

    return 0;
}
