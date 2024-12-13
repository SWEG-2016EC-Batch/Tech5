#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    cout<<"           AASSESSMENT LISTS FOR STUDENT OUT OF 100%"<<endl;
    cout<<"\n";
    float test,quiz, project, assignment, final,total_mark;
    string letter_grade;
    go :
    cout<<"please enter your test result out of 15"<<endl;
    cin>>test;  cout<<"\n";
    if(test<0||test>15||cin.fail()){
         cerr<<"your input is invalid ,plesase enter valid input"<<endl;
         return 1;
        goto go;
    }
    go1 :
    cout<<"please enter your quiz result out of 5"<<endl;
    cin>>quiz;  cout<<"\n";
    if(quiz<0||quiz>5||cin.fail()){
          cerr<<"your input is invalid ,plesase enter valid input"<<endl;
         return 1;
        goto go1;
    }
    go2 :
    cout<<"please enter your project result out of 20"<<endl;
    cin>>project;  cout<<"\n";
    if(project<0||project>20||cin.fail()){
          cerr<<"your input is invalid ,plesase enter valid input"<<endl;
         return 1;
        goto go2;
    }
    go3 :
    cout<<"please enter your assignment result out of 10"<<endl;
    cin>>assignment;  cout<<"\n";
    if(assignment<0||assignment>10||cin.fail()){
          cerr<<"your input is invalid ,plesase enter valid input"<<endl;
         return 1;
        goto go3;
    }
    go4 :
    cout<<"please enter your final result out of 50"<<endl;
    cin>>final;  cout<<"\n";
    if(final<0||final>50||cin.fail()){
           cerr<<"your input is invalid ,plesase enter valid input"<<endl;
         return 1;
        goto go4;
    }
     total_mark = test + quiz  + assignment  + project  + final ;
    
     if (total_mark >= 90) {
        letter_grade = "A+";
    } else if (total_mark >= 80) {
        letter_grade = "A";
    } else if (total_mark >= 75) {
        letter_grade = "B+";
    } else if (total_mark >= 60) {
        letter_grade = "B";
    } else if (total_mark >= 55) {
        letter_grade = "C+";
    } else if (total_mark >= 45) {
        letter_grade = "C";
    } else if (total_mark >= 30) {
        letter_grade = "D";
    } else if (total_mark < 30) {
        letter_grade = "F";
    }

    cout << "The total mark is " << fixed << setprecision(2) << total_mark << endl;
    cout << "The letter grade is " << letter_grade << endl;

    return 0;
}
