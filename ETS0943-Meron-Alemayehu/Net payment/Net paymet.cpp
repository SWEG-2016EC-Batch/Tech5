#include <iostream> 
using namespace std; 
int main(){ 
double weeklyHours, bonusRate, baseSalary,pension,tax, grossSalary, bonusPayment, netSalary; 
const double pension_rate =0.07; 
cout << "enter your weekly working hours"<< endl; 
cin >> weeklyHours; 
cout << "enter your base salary"<<endl; 
cin >> baseSalary; 
if (weeklyHours > 40) {
          cout << "Enter bonus rate per hour: ";
          cin >> bonusRate;
          bonusPayment = weeklyHours * bonusRate;
    }
  
 
grossSalary=baseSalary+bonusPayment; 
 
pension=baseSalary*pension_rate; 
 
if(grossSalary>=200 && grossSalary<=600){
    tax=grossSalary*0.1;
}else if(grossSalary>600 && grossSalary<=1200){
    tax=grossSalary*0.15;
}else if(grossSalary>1200 && grossSalary<=2000){
    tax=grossSalary*0.2;
}else if (grossSalary>2000 && grossSalary<=3500){
    tax=grossSalary*0.25;
}else if (grossSalary>3500 ){
    tax=grossSalary*0.3;
}

netSalary=grossSalary-tax-pension; 
 
cout << "bonus payment: "<< bonusPayment<< endl; 
cout<< "gross salary: "<< grossSalary<<endl; 
cout << "your net salary is: "<< netSalary<<endl; 
 
 
return 0; 
 
 
}
