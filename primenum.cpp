#include <iostream>

using namespace std;

int main(){
    int d;
    cin >> d;
    if (d == 0 || d == 1){
        cout << "not prime";
    }
    else if{
        for (int i=2; i < 4; i++){
            if(d % i == 0){
                cout << "not prime";
                break;
            }
        }
    }
    else if{
        cout << "prime";
    }
        
    
}