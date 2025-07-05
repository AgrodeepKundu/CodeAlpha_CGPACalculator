#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Course {
    string name;
    float grade;
    int creditHours;
};

int main() {
    int n;
    float totalGradePoints = 0, totalCredits = 0;

    cout << "Enter the number of courses: ";
    cin >> n;

    vector<Course> courses(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for course " << i + 1 << ":\n";
        cout << "Course name: ";
        cin >> ws; // clear input buffer
        getline(cin, courses[i].name);
        cout << "Grade (on a 10-point scale): ";
        cin >> courses[i].grade;
        cout << "Credit hours: ";
        cin >> courses[i].creditHours;

        totalGradePoints += courses[i].grade * courses[i].creditHours;
        totalCredits += courses[i].creditHours;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n--- Course-wise Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Course: " << courses[i].name
             << ", Grade: " << courses[i].grade
             << ", Credits: " << courses[i].creditHours << endl;
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nCGPA: " << cgpa << endl;

    return 0;
}
