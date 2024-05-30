#include <bits/stdc++.h>

using namespace std;

struct Student
{
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compareStudents(Student a, Student b)
{
    int totalA = a.math_marks + a.eng_marks;
    int totalB = b.math_marks + b.eng_marks;
    if (totalA == totalB)
    {
        return a.id < b.id;
    }
    return totalA > totalB;
}

int main()
{
    int N;
    cin >> N;

    Student students[100];

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
