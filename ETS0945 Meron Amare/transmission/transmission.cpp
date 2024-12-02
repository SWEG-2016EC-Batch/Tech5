#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double file_size,seconds,minutes,hours;
    int days;
    const int transmission_rate_per_second = 960;
    cout << "Enter the transmission file size in bytes: ";
    cin >> file_size;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }

    seconds = file_size / transmission_rate_per_second;
   minutes = seconds / 60;
    hours = minutes / 60;
    
    cout << "Time taken to send the file:"<< seconds << " seconds, " << minutes << " minutes, " << hours << " hours, and "  << endl;
    return 0;
}
