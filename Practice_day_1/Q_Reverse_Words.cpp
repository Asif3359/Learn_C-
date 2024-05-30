#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;
    bool firstWord = true; 

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!firstWord)
        {
            cout << " ";
        }
        cout << word;
        firstWord = false; 
    }
    cout << endl;

    return 0;
}
