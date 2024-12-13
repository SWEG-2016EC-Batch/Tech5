#include <iostream>
#include <cmath>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return reversed;
}

// Function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

// Function to find the product of even digits
int productOfEvenDigits(int n) {
    int product = 1;
    bool foundEven = false;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            product *= digit;
            foundEven = true;
        }
        n = n / 10;
    }
    return foundEven ? product : 0;
}

// Function to print the first and last digits and their sum
void firstAndLastDigits(int n) {
    int firstDigit, lastDigit;
    lastDigit = n % 10; // Last digit
    while (n >= 10) {
        n = n / 10; // Keep dividing to get the first digit
    }
    firstDigit = n; // Now n is the first digit
    cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << firstDigit + lastDigit << endl;
}

// Function to swap the first and last digits
int swapFirstAndLastDigits(int n) {
    int lastDigit = n % 10;
    int numDigits = countDigits(n);
    int firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }
    
    // Removing first and last digits
    n = n % (int)pow(10, numDigits - 1); // Remove first digit
    n = n / 10; // Remove last digit
    
    // Adding swapped digits
    n = lastDigit * pow(10, numDigits - 1) + n * 10 + firstDigit;
    return n;
}

// Function to check if the number is a palindrome
bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

// Function to find the frequency of each digit in the given number
void digitFrequency(int n) {
    int freq[10] = {0}; // Array to store frequency of digits (0-9)
    while (n != 0) {
        freq[n % 10]++;
        n = n / 10;
    }

    cout << "Digit Frequency Table:\n";
    cout << "Digit | Frequency\n";
    cout << "-------------------\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << "  " << i << "  | " << freq[i] << endl;
        }
    }
}

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if the number is Strong number
bool isStrongNumber(int n) {
    int original = n;
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }
    return sum == original;
}

// Function to check if the number is a Perfect number
bool isPerfectNumber(int n) {
    int sumDivisors = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sumDivisors += i;
        }
    }
    return sumDivisors == n;
}

int main() {
    int number, choice;

    cout << "Enter a number: ";
    cin >> number;

    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse the number\n";
        cout << "2. Count digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. Print first and last digits and their sum\n";
        cout << "5. Swap first and last digits\n";
        cout << "6. Check if the number is a palindrome\n";
        cout << "7. Find the frequency of each digit\n";
        cout << "8. Check if the number is a Strong number\n";
        cout << "9. Check if the number is a Perfect number\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Reversed Number: " << reverseNumber(number) << endl;
                break;
            case 2:
                cout << "Number of digits: " << countDigits(number) << endl;
                break;
            case 3:
                cout << "Product of even digits: " << productOfEvenDigits(number) << endl;
                break;
            case 4:
                firstAndLastDigits(number);
                break;
            case 5:
                cout << "Number after swapping first and last digits: " << swapFirstAndLastDigits(number) << endl;
                break;
            case 6:
                if (isPalindrome(number)) {
                    cout << "The number is a palindrome." << endl;
                } else {
                    cout << "The number is not a palindrome." << endl;
                }
                break;
            case 7:
                digitFrequency(number);
                break;
            case 8:
                if (isStrongNumber(number)) {
                    cout << "The number is a Strong number." << endl;
                } else {
                    cout << "The number is not a Strong number." << endl;
                }
                break;
            case 9:
                if (isPerfectNumber(number)) {
                    cout << "The number is a Perfect number." << endl;
                } else {
                    cout << "The number is not a Perfect number." << endl;
                }
                break;
            case 10:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, try again!" << endl;
        }

    } while (choice != 10);

    return 0;
}
