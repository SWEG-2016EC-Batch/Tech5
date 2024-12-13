#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number for speciifed pattern: ";
    cin >> n;
    if(cin.fail() || n < 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            if(i!=0 && j!=n && j!=i+1) cout << "  ";
            else cout << "* ";
        }
        cout << '\n';     
    }

    return 0;
}
