#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double testRes, quizRes, projectRes, assignmentRes, finalExamRes, totalMark;
    string grade;

    // Input scores
    cout << "Enter test result (out of 100): ";
    cin >> testRes;
    cout << "Enter quiz result (out of 100): ";
    cin >> quizRes;
    cout << "Enter project result (out of 100): ";
    cin >> projectRes;
    cout << "Enter assignment result (out of 100): ";
    cin >> assignmentRes;
    cout << "Enter final exam score (out of 100): ";
    cin >> finalExamRes;
  if (testRes < 0 || testRes > 100 || quizRes < 0 || quizRes > 100 || assignmentRes < 0 || assignmentRes > 100 || projectRes < 0 || projectRes > 100 || finalExamRes < 0 || finalExamRes > 100) {
        cout << "Invalid input" << endl;
        return 0;
    } else if (testRes + quizRes + assignmentRes + projectRes + finalExamRes != 100) {
        cout << "The sum of all marks should be 100" << endl;
        return 0;
    }

    // Calculate total mark
    totalMark = (testRes * 0.15) + (quizRes * 0.05) + (projectRes * 0.20) + 
                (assignmentRes * 0.10) + (finalExamRes * 0.50);

    // Determine grade
    if (totalMark >= 90) {
        grade = "A+";
    } else if (totalMark >= 80) {
        grade = "A";
    } else if (totalMark >= 75) {
        grade = "B+";
    } else if (totalMark >= 60) {
        grade = "B";
    } else if (totalMark >= 55) {
        grade = "C+";
    } else if (totalMark >= 45) {
        grade = "C";
    } else if (totalMark >= 30) {
        grade = "D";
    } else {
        grade = "F";
    }

    // Output total mark and grade
    cout << "Total Mark: " << totalMark << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
