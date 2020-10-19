#include <iostream>

using namespace std;

int referance(int &num){
    num = num * 10;
    cout << "Value of number while performing function = " << num << endl;
    cout << &num + 1  << &num << endl;

    
    return num;
}

int main(){
    int num = 30;
    cout << "Value of number before performing function = " << num << endl;
    referance(num);
    cout << "Value of number after performing function = " << num << endl;
}