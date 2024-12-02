#include <iostream> // For numeric_limits
using namespace std;

int main() {
    // Declare variables for fuel capacity and miles per gallon
    float fuel_capacity, mpg;
    
    // Ask for input: fuel tank capacity in gallons
    cout << "Enter the fuel tank capacity in gallons: ";
    cin>>fuel_capacity;
    // Validate user input for fuel capacity
    while (cin.fail()) {
        // Clear the error state
        cin.clear();
        // Ignore any remaining input in the buffer
        cin.ignore();
        // Ask the user to re-enter a valid value
        cout << "Invalid input. Please enter a numeric value for fuel capacity: ";
        cin>>fuel_capacity;
    }

    // Ask for input: miles per gallon
    cout << "Enter the miles per gallon for the automobile: ";
    cin>>mpg;
    // Validate user input for miles per gallon
    while (cin.fail()) {
        // Clear the error state
        cin.clear();
        // Ignore any remaining input in the buffer
        cin.ignore();
        
        // Ask the user to re-enter a valid value
        cout << "Invalid input. Please enter a numeric value for miles per gallon: ";
        cin>>mpg;
    }

    // Calculate the number of miles the car can be driven
    float miles = fuel_capacity * mpg;

    // Display the result
    cout << "The automobile can be driven " << miles << " miles consistently" << endl;

    return 0;
}
