#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int mark;

    Student(){}
    Student(int id, const char *name, char section, int mark)
    {
        this->id = id;
        strcpy(this->name, name); 
        this->section = section;
        this->mark = mark;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            int Id, Mark;
            char Name[101];
            char Section;

            cin >> Id >> Name >> Section >> Mark;
            students[i] = Student(Id, Name, Section, Mark);
        }

        Student topStudent = students[0];
        for (int i = 1; i < 3; ++i)
        {
            if (students[i].mark > topStudent.mark)
            {
                topStudent = students[i];
            }
        }

        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.mark << endl;
    }

    return 0;
}
