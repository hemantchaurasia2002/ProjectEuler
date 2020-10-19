#include <iostream>

using namespace std;

int fact(int n){
    int phob = 1;
    if(n < 0){
        return -1;
    }
    else if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n + fact(n - 1);
    }
}
int main(){
    int n = 5;
    int result;
    result = fact(n);
    cout << "phoeb =" << result;
}