#include <iostream>
using namespace std;
int main(){
int x;
float w;
float h;
float BMI;
do {

cout << " please enter your weight in kilogram"<< endl;
cin >> w;
cout << "please enter your height in meter"<< endl;
cin >> h;
BMI= w/(h*h);
if(cin.fail() || w<0 && h<0 ){
    cout << "please enter valid weight and height";
}

cout << "your BMI = "<< BMI << endl;
if (BMI<18.5){
cout << "under weight"<<endl;
cout << "you should eat food with high calories"<<endl; }

else if (BMI<=24.9){
         cout << "normal weight"<< endl;
         cout <<"keep it up"<<endl;
         }
else if(BMI<30){
    cout << "you are overweight " << endl;
    cout << "you should balance your diet"<< endl; }
 else if (BMI>=30){
    cout << "you are obese"<<endl;
    cout << "you should eat healthy and drink more water"<<endl;
 }
 cout << "enter 0 to stop or enter any number to continue"<<endl;;
 cin>>x;
}
while (x!=0);


return 0;
}
