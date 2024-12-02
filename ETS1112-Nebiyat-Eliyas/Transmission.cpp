#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double file_size,seconds,minutes,hours;
    int days;
    const int transmission_rate_per_second = 960;
    cout << "Enter the transmission file size in bytes: ";
    cin >> file_size;
    while (cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Invalid input, please enter the file size again: " << endl;
        cin>>file_size;
    }

    seconds = file_size / transmission_rate_per_second;
    minutes = seconds / 60;
    hours = minutes / 60;
    
    cout << "Time taken to send the file:"<< seconds << " seconds, " << minutes << " minutes, " << hours << " hours, and "  << endl;
    return 0;
}
