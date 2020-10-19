#include <iostream>

using namespace std;

typedef long long ll;


ll fibo(ll n1, ll n2){
    ll sum = 0;
    ll sum2 = 0;
    ll n;
    cin >> n;
    while (n2 <= n){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        if(n1 % 2 == 0){
            sum2 = sum2 + n1;
            cout << n1 << endl;
            
            
        }
    }
    return sum2;
}

    

int main(){
    ll n1 = 1;
    ll n2 = 2;
    ll a = fibo(n1, n2);
    cout << "sum = " << a;
}















/*for (ll i = 1; i < ; i++){
        
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;

    }
    return sum;
}*/
