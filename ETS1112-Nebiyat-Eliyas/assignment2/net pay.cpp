#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int workedhours; 
    double basicSalary,bonusRate, grossSalary, bonus = 0.0;
    double pension, tax = 0.0, netSalary;
    
    // Input basic salary, worked hours, and bonus rate
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    cout << "Enter the worked hours: ";
    cin >> workedHours;
    cout << "Enter the bonus rate per hour: ";
    cin >> bonusRate;

    // Calculate gross salary
    if (workedHours > 40) {
        bonus = (workedHours - 40) * bonusRate; // Calculate overtime bonus
    }
    grossSalary = basicSalary + bonus;

    // Calculate pension (7%)
    pension = basicSalary * 0.07;

    // Determine tax rate based on gross salary
    if (grossSalary > 3500) {
        tax = grossSalary * 0.30;
    } else if (grossSalary > 2000) {
        tax = grossSalary * 0.25;
    } else if (grossSalary > 1200) {
        tax = grossSalary * 0.20;
    } else if (grossSalary > 600) {
        tax = grossSalary * 0.15;
    } else if (grossSalary > 200) {
        tax = grossSalary * 0.10;
    } else {
        incometax = 0.0;
     }   



    // Calculate net salary
    netSalary = grossSalary - pension - tax;

    // Output results
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Pension: " << pension << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

