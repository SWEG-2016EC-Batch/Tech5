#include <iostream>
using namespace std;
int main() {
    double test,quiz,project,assignment,finalExam,total_mark;
    char letter_grade;
    cout<<"Enter the mark of test : ";
    cin>>test;
   if (cin.fail()) {
            cout<<"invalid input";
            return 1;
        }
    cout<<"Enter the mark of quiz : ";
        cin>>quiz;
if (cin.fail()) {
            cout<<"invalid input";
            return 1;
        }
        
        cout<<"Enter the mark of project : ";
        cin>>project;
if (cin.fail()) {
            cout<<"invalid input";
            return 1;
        }
        cout<<"Enter the mark of assignment : ";
        cin>>assignment;
       if (cin.fail()) {
            cout<<"invalid input";
            return 1;
        }
        cout<<"Enter the mark of finalExam : ";
        cin>>finalExam;
        if (cin.fail()) {
            cout<<"invalid input";
            return 1;
        }

        total_mark = test * 0.15 + quiz * 0.05 + assignment * 0.1 + project * 0.2 + finalExam * 0.5;
        if (test + quiz + assignment + project + finalExam != 100) {
            cout << "The sum of all marks should be 100" << endl;
            return 0;
        }

        if (total_mark >= 90) {
            letter_grade = 'A+';
        } else if (total_mark >= 80) {
            letter_grade = 'A';
        } else if (total_mark >= 75) {
            letter_grade = 'B+';
        } else if (total_mark >= 60) {
            letter_grade = 'B';
        } else if (total_mark >= 55) {
            letter_grade = 'C+';
        } else if (total_mark >= 55) {
            letter_grade = 'C+';
        } else if (total_mark >= 45) {
            letter_grade = 'C';
        } else if (total_mark >= 30) {
            letter_grade = 'D';
        } else if (total_mark <30) {
            letter_grade = 'F';
        } else {
            cout<<"invalid mark ";
        }

        cout << "The total mark is: " << total_mark << endl;
        cout << "The grade letter is: " << letter_grade;

        return 0;
    }
