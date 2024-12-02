#include <iostream>
#include <cmath>
using namespace std;
int main (){
  double x ,y,result;
  cout << "please enter the value of x" << endl;
  cin>> x;
  cout << "please enter the value of y" << endl;
  cin>> y;
  result= pow(x,y);

  cout << "The result of "<< x<<"^"<< y<<" is "<< result;

return 0;
}

