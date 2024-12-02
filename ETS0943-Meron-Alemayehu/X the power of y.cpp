#include <iostream>
#include <cmath> // Include cmath for pow function
using namespace std;

int main()
{
  double x, y, result;

  // Prompt user for input
  cout << "Enter the value of x (base): ";
  cin >> x; // Read the base value
  if (cin.fail())
  {
    cerr << "Invalid input for x." << endl; // Output error message
    return 1;                               // Exit the program with an error status
  }

  cout << "Enter the value of y (exponent): ";
  cin >> y; // Read the exponent value
  if (cin.fail())
  {                                         // Check for invalid input
    cerr << "Invalid input for y." << endl; // Output error message
    return 1;                               // Exit the program with an error status
  }

  // Calculate x raised to the power of y
  result = pow(x, y);
  // Output the result
  cout << "The result of " << x << " raised to the power of " << y << " is " << result << endl;

  return 0;
}
