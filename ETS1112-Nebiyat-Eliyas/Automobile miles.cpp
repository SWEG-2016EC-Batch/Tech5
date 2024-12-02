#include <iostream>

using namespace std;

int main(){
    int milesPerGallon, tankCapacity, mileDriven ;

    cout << "Please enter the capacity of the tank"<< endl;
    cin >> tankCapacity;

    cout << "Please enter the miles per gallons"<< endl;
    cin >> milesPerGallon;

    mileDriven = tankCapacity*milesPerGallon;

    cout << " you can drive " << mileDriven<< " miles without refueling.";

    return 0;
}
    
    
    
