#include <iostream>
#include <time.h> 

using namespace std;


int isprime(int n){
    int p = 0;
    for (int i = 0; i < n; i++){
        if(i == 2 || i == 3){
            p = i;
            cout << p << endl;
        }
        else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            p = i;
            cout << p << endl;
        }
        else if (i % 2 == 0 || i % 3 == 0){
            p = p;
        }
    }
    return p;
}

int main(){
    clock_t t;
    int n;
    t = clock();
    cin >> n;
    int x;
    x = prime(n);
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    
}