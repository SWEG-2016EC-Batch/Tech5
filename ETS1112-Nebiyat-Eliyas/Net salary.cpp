#include <iostream>
#include <string>
using namespace std;
int main(){
string employeeName;
float weeklyhours, bonusrate, basesalary,pension,tax;
float grossSalary, bonusPayment, netSalary;
const float pension_rate =0.05;
const float tax_rate=0.15;
cout << "please enter your name"<< endl;
cin >> employeeName;
cout << "enter your weekly working hours"<< endl;
cin >> weeklyhours;
cout << "enter your base salary"<<endl;
cin >> basesalary;
cout << "enter your bonus rate"<< endl;
cin >> bonusrate;
bonusPayment=bonusrate*weeklyhours;

grossSalary=basesalary+bonusPayment;

pension=grossSalary*pension_rate;

tax=grossSalary*tax_rate;

netSalary=grossSalary-tax-pension;

cout<< "Employee name: "<< employeeName<< endl;
cout << "bonus payment: "<< bonusPayment<< endl;
cout<< "gross salary: "<< grossSalary<<endl;
cout << "your net salary is: "<< netSalary<<endl;










return 0;


}
