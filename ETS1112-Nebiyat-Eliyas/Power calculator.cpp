#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

int main() {
    // Declare variables
    double x, y, result;

    // Input values from the user
    cout << "Enter the value of x: ";
    cin >> x;
    while (cin.fail()){
    cin.clear();
    cin.ignore();
    
    cout<<"please enter the value of x properly: ";
    cin>>x;
    }

    cout << "Enter the value of y: ";
    cin >> y;
    
    while(cin.fail()){
    cin.clear();
    cin.ignore();
    
    cout<<"please enter the value of y properly: ";
    cin>>y;
    }

    // Calculate x^y using the pow function from the cmath library
    result = pow(x, y);

    // Display the result
    cout << "Result of x the power of y is: " << result << endl;

    return 0;
}
