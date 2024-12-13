#include<iostream>
using namespace std;
int main (){
double workedhours, bonusrate, basesalary,pension,tax;
double grossSalary, bonusPayment=0, netSalary, tax_rate;
const double pension_rate=0.07;



if  ( grossSalary<=200){
   tax_rate=0;    }
   else if (grossSalary<=600){

    tax_rate=0.1;
   }
   else if (grossSalary<=1200){

    tax_rate=0.15;
   }
   else if (grossSalary<=2000){

    tax_rate=0.2;
   }
   else if (grossSalary<=3500){

    tax_rate=0.25;
   }
   else{

    tax_rate=0.3;
   }



cout << "enter your  worked hours"<< endl;
cin >> workedhours;

cout << "enter your base salary"<<endl;
cin >> basesalary;


if (workedhours>40){
    cout << "enter your overtime bonus rate per hour";
    cin >>bonusrate;
  bonusPayment+=(workedhours-40)*bonusrate;

}


grossSalary=basesalary+bonusPayment;

tax=grossSalary*tax_rate;

pension=grossSalary*pension_rate;

netSalary=grossSalary-tax-pension;
cout << "gross salary: "<< grossSalary<<endl;
cout << "tax: "<< tax<<endl;
cout << "pension: "<<pension << endl;
cout << "your net salary is "<< netSalary;

















return 0;



}


