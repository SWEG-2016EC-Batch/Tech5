#include <iostream>
using namespace std;

int main()
{
  // Declare required variables to store the weight, height, bmi and gender
  double weight, height, bmi;
  char gender;
  int continueInpu;
  // Use a while loop to continue until the user decides to stop
  while (1 > 0)
  {
    // Ask the user to enter weight, height, and gender respectively
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    cout << "Enter gender (M/F): ";
    cin >> gender;

    // Calculate the BMI and display it
    bmi = weight / (height * height);
    cout << "Your BMI is " << bmi << endl;
    cout << "Your gender is " << gender << endl;

    // Determine weight level based on BMI and gender
    // Using if else if stmts

    if (cin.fail() || height == 0)
    {
      cerr << "Invalid input " << endl;
      return 1;
    }
    else
    {
      if (bmi >= 30)
      {
        cout << "You are obese. It's recommended to consult with a Doctor." << endl;
      }
      else if ((gender == 'M' || gender == 'm') && bmi < 20.5)
      {
        cout << "You are underweight. You must eat balance diet." << endl;
      }
      else if ((gender == 'M' || gender == 'm') && bmi >= 20.5 && bmi < 26)
      {
        cout << "You have a normal weight. Keep it up!" << endl;
      }
      else if ((gender == 'M' || gender == 'm') && bmi >= 26 && bmi < 30)
      {
        cout << "You are overweight. You must do exercise." << endl;
      }
      else if ((gender == 'F' || gender == 'f') && bmi < 18.5)
      {
        cout << "You are underweight. You must eat balance diet." << endl;
      }
      else if ((gender == 'F' || gender == 'f') && bmi >= 18.5 && bmi < 24)
      {
        cout << "You have a normal weight. Keep it up!" << endl;
      }
      else if ((gender == 'F' || gender == 'f') && bmi >= 24 && bmi < 30)
      {
        cout << "You are overweight. You must do exercise." << endl;
      }
      else
      {
        cout << "Invalid gender" << endl;
      }
    } // Ask if the user wants to continue
    cout << "Do you want to continue enter non zero number" << endl;
    cin >> continueInpu;
    if (continueInpu == 0)
    {
      break;
    }
  }
  return 0;
}
