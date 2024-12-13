#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int choice,number,temp,digit=0,rev=0,tr;
 
  do{
  cout<<"enter the question you want"<<endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. sum of First and last digit" << endl;
    cout << "5. Swap first and last digit" << endl;
    cout << "6. check weather it is Palindrome" << endl;
    cout << "7. Frequency of first digit" << endl;
    cout << "8. check weather it is Strong number" << endl;
    cout << "9. check weather it is Perfect number" << endl;
    
    cin>>choice;
      cout<<"enter the number"<<endl;
  cin>>number;
    switch(choice){
    case 1:
     {
    while(number>0){
    digit=number%10;
    rev=10*rev+digit ;
    number=number/10;
    }
    cout<<"The reverse of the number is "<<rev;

        break;}
        case 2:
            {

            int count=0;
        while(number>0){
            count++;
            number=number/10;
        }
        cout<<"The number has " <<count<< "digit";

        break;}

        
        case 3:
        {
        int pro=1;
            while(number>0){
                digit=number%10;
                if(digit%2==0){
                    pro*=digit;
                }
                number/=10;
            }
            cout<<":The product of the even no is : "<<pro;
           break;}
        case 4:
        {
               int last,first,sum=0;
           last=number%10;
           first=number;
           while(first>=10){
           first/=10;
           }
           sum=last+first;
           cout<<"The sum of the first and the last digit is "<<sum;
          break;
           }
        case 5:
        {
        int temp=0,last,first,sum=0;
           last=number%10;
           first=number;
           while(first>=10){
           first/=10;
           }
           temp=last;
           last=first;
           first=temp;
           cout<<"last"<<last<<endl;
           cout<<"first"<<first<<endl;
            break;
           }
        case 6:
        {
        temp=number;
           while(number>0){
            digit=number%10;
            rev=rev*10+digit;
            number/=10;
           }
           if(rev==temp){
            cout<<"It is palanidirom";
           }
           else{
            cout<<"It is not palanidirom";
           }
           break;
           }
        case 7:
         { 
         int first,count=0,temp=number;
           first=number;
           while(first>=10){
            first/=10;
           }
           while(temp>0){

            if(temp%10==first){
                count++;


            }
           temp/=10;
           }
            cout<<"The frequency of the first number is:"<<count;
           break;
           }
        
        case 8:
        {
               int strongfac=0,temp=number;
               while(number>0){
                digit=number%10;
               int fac=1;
                for(int i=1;i<=digit ;i++){
                    fac*=i;
                }
                strongfac+=fac;
                number/=10;
               }
               if(strongfac==temp){
                cout<<"It is strong number";

               }
               else{
                cout<<"It is not strong number";
               }
                break;}
        case 9:{
                int sumDivisors = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
                sumDivisors += i;
        }
        if (sumDivisors == number)
            cout << "The number is a Perfect number." << endl;
        else
            cout << "The number is not a Perfect number." << endl;
        break;
    }


}cout<<"\nenter 1 to continue and zero to terminate: ";
  cin>>tr;}
  while(tr==1);
  cout<<"\nthank you for using our program !";
    return 0;
}
