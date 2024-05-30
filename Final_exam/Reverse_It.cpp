#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student st[N];

    for (int i = 0; i < N; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].sec >> st[i].id;
    }

    for (int i = 0; i < N/2; i++)
    {
        char temp = st[i].sec;
        st[i].sec = st[N - 1 - i].sec;
        st[N - 1 - i].sec = temp;
    }

    for (int i = 0; i < N; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].sec << " " << st[i].id << endl;
    }

    return 0;
}
