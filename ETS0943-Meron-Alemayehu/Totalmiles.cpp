#include <iostream>
using namespace std;

int main()
{
  float capacity, milesPerGallon, totalMiles;

  // Prompt user for input
  cout << "Enter the capacity of the fuel tank in gallons: ";
  cin >> capacity;
  if (cin.fail())
  {
    cerr << "invalid input for capacity" << endl;
    return 1;
  }
  cout << "Enter the miles per gallon the automobile can drive: ";
  cin >> milesPerGallon;
  if (cin.fail())
  {
    cerr << "invalid input for miles per gallon" << endl;
    return 1;
  }

  // Calculate total miles
  totalMiles = capacity * milesPerGallon;

  // Output the result
  cout << "The automobile can be driven for " << totalMiles << " miles without refueling." << endl;

  return 0;
}
