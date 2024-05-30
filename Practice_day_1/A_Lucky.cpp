#include <bits/stdc++.h>

using namespace std;

string isLucky(string tic)
{
    string _1st3 = tic.substr(0, 3);
    string _Last3 = tic.substr(3, 3);

    int sum_1st3 = 0, sum_Last3 = 0;
    for (char digit : _1st3)
    {
        sum_1st3 += digit - '0';
    }
    for (char digit : _Last3)
    {
        sum_Last3 += digit - '0';
    }

    if (sum_1st3 == sum_Last3)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--)
    {
        string tic;
        getline(cin, tic);

        cout << isLucky(tic) << endl;
    }

    return 0;
}