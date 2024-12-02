#include <iostream>
using namespace std;

int main()
{
  long fileSize;
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

  int hours = timeInSeconds / 3600;
  int minutes = (timeInSeconds - (hours * 3600)) / 60;
  int seconds = timeInSeconds - (hours * 3600 + minutes * 60);

  cout << "Time taken to send the file: " << hours << " hours " << minutes << " minutes " << seconds << " seconds." << endl;

  return 0;
}
