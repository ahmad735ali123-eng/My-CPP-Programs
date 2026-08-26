#include <iostream>
using namespace std;
int main()
{
    string name;
    int rollNumber;
    float english, math, physics;
    float total, percentage;
    char grade;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your Roll No:";
    cin >> rollNumber;
    cout << "Enter English Marks:";
    cin >> english;
    cout << "Enter Math Marks:";
    cin >> math;
    cout << "Enter Physics Marks:";
    cin >> physics;
    total = english + math + physics;
    percentage = (total / 300) * 100;
    if (percentage >= 80)
    {
        grade = 'A';
    }
    else if (percentage >= 70)
    {
        grade = 'B';
    }
    else if (percentage >= 60)
    {
        grade = 'C';
    }
    else if (percentage >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "-----Student Result-----" << endl;
    cout << "Name:" << name << endl;
    cout << "Roll No:" << rollNumber << endl;
    cout << "Total" << total << endl;
    cout << "Percentage:" << percentage << " & " << endl;
    cout << "Grade:" << grade << endl;
    return 0;
}