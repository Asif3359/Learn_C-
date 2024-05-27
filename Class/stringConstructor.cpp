#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "Hello world";
    cout << s << endl; // Hello world

    string s1("Hello World");
    cout << s1 << endl; // Hello world

    string s2("Hello World",4);
    cout << s2 << endl; // Hell

    string s3(s1,4);
    cout << s3 << endl; // o world

    string s4(4,'a');
    cout << s4 << endl; // aaaa

    return 0;
}