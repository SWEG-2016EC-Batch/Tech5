#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int k = 5 ; k > i; k--){
                cout << " ";
        }
        for(int j = 0; j < (i * 2)+1; j++){
            if(j!=0 && j!=i*2 && i!=4){
                cout <<" ";
                continue;
            }
            cout << "*";
        }
        cout << '\n';     
    }

    return 0;
}
