#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id1, id2, id3;
        char name1[101], name2[101], name3[101];
        char section1, section2, section3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> section1 >> marks1;
        cin >> id2 >> name2 >> section2 >> marks2;
        cin >> id3 >> name3 >> section3 >> marks3;

        int max_marks = marks1;
        int selected_id = id1;
        char selected_name[101];
        strcpy(selected_name, name1);
        char selected_section = section1;

        if (marks2 > max_marks || (marks2 == max_marks && id2 < selected_id))
        {
            max_marks = marks2;
            selected_id = id2;
            strcpy(selected_name, name2);
            selected_section = section2;
        }

        if (marks3 > max_marks || (marks3 == max_marks && id3 < selected_id))
        {
            max_marks = marks3;
            selected_id = id3;
            strcpy(selected_name, name3);
            selected_section = section3;
        }

        cout << selected_id << " " << selected_name << " " << selected_section << " " << max_marks << endl;
    }

    return 0;
}