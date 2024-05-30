#include <bits/stdc++.h>
using namespace std;

bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main()
{
    string str, ers;
    int counter = 0;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (isAlpha(str[i]))
        {
            ers += str[i];
        }

        if ((!isAlpha(str[i]) || i == str.size() - 1) && ers.size() != 0)
        {
            counter++;
            ers = "";
        }
    }

    cout << counter << endl;
    return 0;
}
