#include <iostream>
using namespace std;

int main (){

string name;
double weekly_working_hours, bonus_rate_per_hour,base_salary, gross_salary, net_salary, bonus_payment, pension,tax; 

cout<<"Enter the name of employee: "<< endl;
cin>>name;

cout<<"Enter base salary: "<<endl;
cin>>base_salary;

cout << "Enter weekly working hours: "<<endl;
cin>>weekly_working_hours;

cout<<"Enter bonus rate per hour: "<< endl;
cin>>bonus_rate_per_hour;
  
bonus_payment=weekly_working_hours*bonus_rate_per_hour;
gross_salary=base_salary+bonus_payment;
tax=gross_salary*0.15;
pension=base_salary*0.5;
net_salary=gross_salary-tax-pension;
  
cout<<"bonus payment="<<bonus_payment<<endl;
cout<<"gross salary="<<gross_salary<<endl;
cout<<"net salary="<<net_salary;

return 0;
}
