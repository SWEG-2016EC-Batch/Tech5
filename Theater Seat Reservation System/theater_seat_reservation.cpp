#include <iostream>  
#include <string>  
#include <iomanip>
#include <algorithm> // For transform 
using namespace std;  

const int VIP_CAPACITY = 30;  
const int STANDARD_CAPACITY = 70;  
const int TOTAL_SEATS = VIP_CAPACITY + STANDARD_CAPACITY;  

int vipSeats[VIP_CAPACITY] = {0}; // 0 means available, 1 means occupied  
int standardSeats[STANDARD_CAPACITY] = {0};  

// Multidimensional array for patron details  
string patrons[TOTAL_SEATS][5]; // 0: Name, 1: Genre, 2: Age, 3: Unique ID, 4: Section  
int patronSeatNumbers[TOTAL_SEATS];  
int patronCount = 0;  

int main() {  
    int choice;  
    do {  
        
        cout << "\n--- Theater Seat Reservation System ---\n";  
        cout << "1. Reserve VIP Seat\n";  
        cout << "2. Reserve Standard Seat\n";  
        cout << "3. Display Occupancy Status\n";  
        cout << "4. Search Patron by Name\n";  
        cout << "5. Exit\n";  
        cout << "Enter your choice: ";  
         cin>>choice;

        if (choice == 1 || choice == 2) {  
            string name, genre, section;  
            int age;  
            int seatNumber = -1;  
            int* seatArray;  
            int seatLimit, offset;  

            // Determine which section to reserve  
            if (choice == 1) {  
                seatArray = vipSeats;  
                seatLimit = VIP_CAPACITY;  
                offset = 1; // Seat numbers start from 1  
                section = "VIP";  
            } else {  
                seatArray = standardSeats;  
                seatLimit = STANDARD_CAPACITY;  
                offset = 31; // Seat numbers start from 31  
                section = "Standard";  
            }  

            // Find the first available seat in the requested section  
            for (int i = 0; i < seatLimit; i++) {  
                if (seatArray[i] == 0) { // 0 means available  
                    seatNumber = i + offset; // Calculate actual seat number  
                    seatArray[i] = 1; // Mark seat as occupied  
                    break;  
                }  
   }
            // Collect patron details  
            cout << "Enter your name: ";  
            cin.ignore(); // Clear the newline from previous input  
            getline(cin, name);  
             // Genre input with validation  
            cout << "Enter your preferred genre (Action, Comedy, Drama, Horror, Thriller): ";  
            getline(cin, genre);  
            // Convert genre input to lowercase for case-insensitive comparison
            transform(genre.begin(), genre.end(), genre.begin(), ::tolower);

            while (genre != "action" && genre != "comedy" && genre != "drama" && genre != "horror" && genre != "thriller") {
                cout << "Invalid genre. Please enter one of the following: Action, Comedy, Drama, Horror, Thriller: ";
                getline(cin, genre);
                transform(genre.begin(), genre.end(), genre.begin(), ::tolower);
            }
            cout << "Enter your age: ";  
            cin>>age;

            // Assign a unique ID  
            int uniqueID = patronCount + 1;  

            // Save patron information  
            patrons[patronCount][0] = name;  
            patrons[patronCount][1] = genre;  
            patrons[patronCount][2] = to_string(age);  
            patrons[patronCount][3] = to_string(uniqueID);  
            patrons[patronCount][4] = section;  
            patronSeatNumbers[patronCount] = seatNumber;  
            patronCount++;  

            // Generate ticket  
            cout << "\n--- Ticket ---\n";  
            cout << "Name: " << name << endl;  
            cout << "Age: " << age << endl;  
            cout << "Genre: " << genre << endl;  
            cout << "Section: " << section << endl;  
            cout << "Seat Number: " << seatNumber << endl;  
            cout << "Unique ID: " << uniqueID << endl;  

        } else if (choice == 3) {  
            cout << "\n--- Current Seat Occupancy ---\n";  
            cout << "VIP Seats: \n";  
            for (int i = 0; i < VIP_CAPACITY; i++) {  
                cout << "Seat " << i + 1 << ": " << (vipSeats[i] ? "Occupied" : "Available") << endl;  
            }  

            cout << "\nStandard Seats: \n";  
            for (int i = 0; i < STANDARD_CAPACITY; i++) {  
                cout << "Seat " << i + 31 << ": " << (standardSeats[i] ? "Occupied" : "Available") << endl;  
            } 
            
        } else if (choice == 4) {  
            string searchName;  
            cout << "Enter the name of the patron to search: ";  
            cin.ignore();  
            getline(cin, searchName);  

            bool found = false;  
            for (int i = 0; i < patronCount; i++) {  
                if (patrons[i][0] == searchName) {  
                    found = true;  
                    cout << "\n--- Patron Details ---\n";  
                    cout << "Name: " << patrons[i][0] << endl;  
                    cout << "Age: " << patrons[i][2] << endl;  
                    cout << "Genre: " << patrons[i][1] << endl;  
                    cout << "Section: " << patrons[i][4] << endl;  
                    cout << "Seat Number: " << patronSeatNumbers[i] << endl;  
                    cout << "Unique ID: " << patrons[i][3] << endl;  
                    break;  
                }  
            }  

            if (!found) {  
                cout << "No patron found with the name " << searchName << ".\n";  
            } 
        } else if (choice == 5) {  
            cout << "Exiting the system. Goodbye!\n";  
        }  
    } while (choice != 5);  

    return 0;  
}
