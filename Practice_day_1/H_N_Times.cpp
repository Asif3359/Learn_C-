#include <bits/stdc++.h>
using namespace std;
void printData(int N, char Ch)
{
    for (int i = 1; i <= N; i++)
    {
        cout << Ch << " ";
    }
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        char Ch;
        cin >> Ch;
        printData(N, Ch);
        cout << endl;
    }
}