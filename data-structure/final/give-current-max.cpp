#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int mark, roll;

    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->mark = mark;
        this->roll = roll;
    }
};

class StudentComparator
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.mark == right.mark)
        {
            return left.roll > right.roll;
        }
        else
        {
            return left.mark < right.mark;
        }
    }
};

int main()
{
    int q;
    cin >> q;

    priority_queue<Student, vector<Student>, StudentComparator> studentQueue;

    while (q--)
    {
        string name;
        int mark, roll;
        cin >> name >> roll >> mark;
        Student student(name, roll, mark);
        studentQueue.push(student);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int operation;
        cin >> operation;

        if (operation == 0)
        {
            string name;
            int mark, roll;
            cin >> name >> roll >> mark;
            Student student(name, roll, mark);
            studentQueue.push(student);

            cout << studentQueue.top().name << " " << studentQueue.top().roll << " " << studentQueue.top().mark << endl;
        }
        else if (operation == 1)
        {
            if (!studentQueue.empty())
            {
                cout << studentQueue.top().name << " " << studentQueue.top().roll << " " << studentQueue.top().mark << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (operation == 2)
        {
            if (!studentQueue.empty())
            {
                studentQueue.pop();
                if (!studentQueue.empty())
                {
                    cout << studentQueue.top().name << " " << studentQueue.top().roll << " " << studentQueue.top().mark << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
