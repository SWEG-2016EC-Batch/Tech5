#include <iostream>
using namespace std;

int main()
{
  char employeeName[100]; // Character array to store employee name
  double weeklyHours, bonusRate, baseSalary;
  double grossSalary, netSalary, bonusPayment;
  const float pensionRate = 0.05; // 5% pension rate
  const float taxRate = 0.15;     // 15% tax rate

  // Prompt user for input
  cout << "Enter employee name: ";
  cin >> employeeName; // Read employee name (only first word)
  if (cin.fail())
  {
    cerr << "Invalid input for employee Name ." << endl; // Output error message
    return 1;                                            // Exit the program with an error status
  }

  cout << "Enter weekly working hours: ";
  cin >> weeklyHours;
  if (cin.fail())
  {
    cerr << "Invalid input for weekly hours ." << endl; // Output error message
    return 1;                                           // Exit the program with an error status
  }

  cout << "Enter bonus rate per hour: ";
  cin >> bonusRate;
  if (cin.fail())
  {
    cerr << "Invalid input for bonus rate ." << endl; // Output error message
    return 1;                                         // Exit the program with an error status
  }

  cout << "Enter base salary: ";
  cin >> baseSalary;
  if (cin.fail())
  {
    cerr << "Invalid input for base salary ." << endl; // Output error message
    return 1;                                          // Exit the program with an error status
  }

  // Calculate bonus payment
  bonusPayment = weeklyHours * bonusRate;

  // Calculate gross salary
  grossSalary = baseSalary + bonusPayment;

  // Calculate net salary
  netSalary = grossSalary - (grossSalary * pensionRate) - (grossSalary * taxRate);

  // Output the results
  cout << "Employee Name: " << employeeName << endl;
  cout << "Gross Salary: " << grossSalary << endl;
  cout << "Net Salary: " << netSalary << endl;
  cout << "Bonus Payment: " << bonusPayment << endl;

  return 0;
}
