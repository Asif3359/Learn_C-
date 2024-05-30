#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        string S, X;
        cin >> S >> X ;

        int SLen = S.length();
        int XLen = X.length();
        int pos = 0;

        while (pos <= SLen)
        {
            bool found = true;
            for (int j = 0; j < XLen; ++j)
            {
                if (S[pos + j] != X[j])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                S.replace(pos, XLen, "#");
                SLen = S.length();
                pos += 1;
            }
            else
            {
                pos += 1;
            }
        }

        cout << S << endl;
    }

    return 0;
}