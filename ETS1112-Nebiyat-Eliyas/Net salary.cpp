#include <iostream>
using namespace std;

int main (){

//declare the variable 
string name;
double weekly_working_hours, bonus_rate_per_hour,base_salary;
double gross_salary, net_salary, bonus_payment, pension,tax; 

//Ask the user to input that use to calculate nate salary 

cout<<"Enter the name of employee: "<< endl;
cin>>name;

cout<<"Enter base salary: "<<endl;
cin>>base_salary;

while(cin.fail()){
        cin.clear();
        cin.ignore();
   cout<<"enter the base salary properly again: ";
   cin>>base_salary;    
  }

cout << "Enter weekly working hours: "<<endl;
cin>>weekly_working_hours;

while(cin.fail()){
        cin.clear();
        cin.ignore();
   cout<<"enter the weekly working hours properly again: ";
   cin>>weekly_working_hours;    
  }

cout<<"Enter bonus rate per hour: "<< endl;
cin>>bonus_rate_per_hour;

while(cin.fail()){
        cin.clear();
        cin.ignore();
   cout<<"enter the bonus rate per hour properly again: ";
   cin>>bonus_rate_per_hour;    
  }
//calculate net salary
bonus_payment=weekly_working_hours*bonus_rate_per_hour;
gross_salary=base_salary+bonus_payment;
tax=gross_salary*0.15;
pension=base_salary*0.5;

net_salary=gross_salary-tax-pension;
cout<<"net salary="<<net_salary<<endl;

return 0;







}
