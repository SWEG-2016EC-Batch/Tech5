#include <iostream>
using namespace std;
int main (){
double filesizeBytes,transmissionTime ;
const double transmissionRate=960;

cout << "please enter the file size in Bytes "<< endl;
cin >> filesizeBytes;

transmissionTime=filesizeBytes/transmissionRate;

cout <<"The transmission time in seconds is: "<<transmissionTime ;














return 0;
}
