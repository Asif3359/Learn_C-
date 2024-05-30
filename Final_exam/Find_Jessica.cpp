#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);

    stringstream ss(str);

    string name ;

    int flag = 0 ;
    while (ss>>name)
    {
        if(name=="Jessica")
        {
            flag=1 ;
        }
    }
    if (flag==1)
    {
        cout << "YES\n";
    }
    else
    {
        cout <<"NO\n";
    }
    
    
    
    return 0;
}