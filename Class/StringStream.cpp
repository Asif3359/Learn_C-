#include <bits/stdc++.h>

using namespace std;

void printSt(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        printSt(ss);
        cout << word << endl;
    }
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    printSt(ss);
    // cout << s << endl;

    return 0;
}