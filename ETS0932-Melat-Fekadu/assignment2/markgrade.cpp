#include <iostream>
using namespace std;
int main (){
float test,quiz,assignment,finalExam,project,mark;
char grade;
cout<< "enter your test result out of 15"<< endl;
cin>>test;
cout<< "enter your quiz result out of 5"<< endl;
cin>>quiz;
cout<< "enter your assignment result out of 10"<< endl;
cin>>assignment;
cout<< "enter your project result out of 20"<< endl;
cin>>project;
cout<< "enter your final exam  result out of 50"<< endl;
cin>>finalExam;
mark=test+quiz+assignment+project+finalExam;
cout <<"your total mark is: "<< mark<< endl;
if (cin.fail() || mark < 0 || mark >100){
    cout << "Invalid Input";
}
else{
 if (mark>=90){
 cout <<" your grade is A+ ";
 }
 else if (  mark >= 80){
 cout <<" your grade is A";
 }
else if (  mark >= 75){
 cout <<" your grade is B+ ";
 }
 else if (mark>=60 ){
   cout <<" your grade is B ";
   }
else if ( mark >=55 ){
   cout <<" your grade is C+ ";
   }
  else if ( mark>=45 ){
   cout <<" your grade is C";
   }
   else if ( mark>=30 ){
   cout <<" your grade is D ";
   }
   else if ( mark < 30) {
   cout <<" your grade is F ";
   }
   else {
   cout << "invalid ";}

}
return 0;
}


