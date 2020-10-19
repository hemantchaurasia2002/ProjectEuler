#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int n1 = 0;
    int n2 = 1;
    int sum;
    for(int i = 1; i < n; i++){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout << sum << " ";      
    }
    cout << endl;
    cout << sum;
}