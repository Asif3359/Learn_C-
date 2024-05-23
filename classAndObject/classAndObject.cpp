#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main(int argc, char const *argv[])
{
    Student a;

    char temp[100] = "Asif";
    strcpy(a.name, temp);
    a.roll = 359;
    a.cgpa = 3.5;

    Student b;
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    getchar();

    Student c;
    cin.getline(c.name, 100);
    cin >> c.roll >> c.cgpa;
    getchar();

    cout << a.name << " " << a.roll << " " << a.cgpa << "\n";
    cout << b.name << " " << b.roll << " " << b.cgpa << "\n";
    cout << c.name << " " << c.roll << " " << c.cgpa << "\n";

    return 0;
}