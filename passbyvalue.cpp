#include <iostream>

using namespace std;

void value(int num){
    num = num * 10;
    cout << "Value of the Number when applying the function = " << num << endl;
}

int main(){
    int num = 20;
    cout << "Value of the Number before applying function = " << num << endl;
    value(num);
    cout << "Value of the Number after function calling = " << num << endl;
}
