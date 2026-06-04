#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter number of courses: ";
    cin >> n;

    float grade[n], credit[n];
    float totalCredits = 0, totalGradePoints = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter grade for course " << i + 1 << ": ";
        cin >> grade[i];

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credit[i];

        totalCredits = totalCredits + credit[i];
        totalGradePoints = totalGradePoints + (grade[i] * credit[i]);
    }

    float gpa = totalGradePoints / totalCredits;
    float cgpa = gpa;

    cout << "\n--- Course Grades ---" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1 << " Grade: " << grade[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << gpa << endl;
    cout << "Overall CGPA: " << cgpa << endl;

    return 0;
}