#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;
    if(cin.fail()) {
        cout<<"invalid input"<<endl;
        return 0;
    }

    cout << "Enter the value of y: ";
    cin >> y;
    if (cin.fail()) {
        cout<<"invalid input"<<endl;
        return 0;
    }

    result = pow(x, y);


    cout << "The result of " << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}