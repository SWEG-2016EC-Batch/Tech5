#include <iostream>
using namespace std;

int main() {
    
    double tankcapacity, milesPerGallon, milesDriven;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankcapacity;

    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

    milesDriven = tankcapacity * milesPerGallon;


    cout << "The automobile can be driven for " << milesDriven << " miles without refueling." << endl;

    return 0;
}
