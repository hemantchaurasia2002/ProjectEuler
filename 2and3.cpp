#include <iostream>
#include <time.h> 

using namespace std;

int method1(int n)
{   //initializing loop
int sum = 0;
    for(int i = 3; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
    }
    return sum;
    
}


int method2(int n) {
    int sum = 0;
    for (int i = 3; i < n; i + 3){
        sum = sum + i;
    }
    for (int j = 5; j < n; j + 5){
        if(j % 3 != 0){
            cout << j;
            //sum = sum + j;
        }
            
    }
    return sum;
}

int main(){
    
    int n;
    cin >> n;
    int x = method1(n);
    cout << "sum =" << x << endl;
    int y = method2(n);
    cout << "sum = " << y << endl;
}

/*int main() {
    clock_t t;
    int sum = 0;
    t = clock();
    //initializing loop
    int n;
    cin >> n;
    for(int i = 3; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
    }
    cout << "sum = " << sum << endl; 
    t = clock() - t;
    printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
}*/