#include <iostream>
using namespace std;

int main()
{
  long  fileSize;
  const int transmissionRate = 960; // characters per second
  float timeInSeconds;

  cout << "Enter file size in bytes: ";
  cin >> fileSize;
  if (cin.fail())
  {
    cerr << "Invalid input for file size." << endl; // Output error message
    return 1;                                       // Exit the program with an error status
  }

  timeInSeconds = static_cast<float>(fileSize) / transmissionRate;

  int days = timeInSeconds / 86400; // 86400 seconds in a day
    int hours = (timeInSeconds - (days * 86400)) / 3600; // Remaining hours
    int minutes = (timeInSeconds - (days * 86400 + hours * 3600)) / 60; // Remaining minutes
    int seconds = timeInSeconds - (days * 86400 + hours * 3600 + minutes * 60); // Remaining seconds

  cout << "Time taken to send the file: " << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds." << endl;


  return 0;
}
