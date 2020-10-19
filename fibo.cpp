#include <iostream>

using namespace std;

int fibo(int n){
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
        cout << "sum of Fibo series : " << fibo(n);
        
    }
}

int main(){
    int n;
    cin >> n;
    fibo(n);
    cout << "sum of Fibo series : " << fibo(n);
}