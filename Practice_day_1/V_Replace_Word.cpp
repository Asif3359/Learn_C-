#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string inStr = "EGYPT";
    string replace = " ";

    int pos = str.find(inStr);
    while (pos != string::npos)
    {
        str.replace(pos, inStr.length(), replace);
        pos = str.find(inStr, pos + replace.length());
    }

    cout << str << endl;

    return 0;
}
