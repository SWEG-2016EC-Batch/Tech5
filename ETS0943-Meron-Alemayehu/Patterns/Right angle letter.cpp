#include <iostream>
using namespace std;

int main(){
    char counter = 'A';
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i+1; j++){
            cout << counter << " ";
            counter++;
        }

        cout << '\n';
        counter = 'A';      
    }

    return 0;
}
