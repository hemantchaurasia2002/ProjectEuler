#include <iostream>

using namespace std;

void sort(int arr[], int size) {
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
    }
}

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size = 4;
    int arr[size] = {100, 67, 93, 20};
    cout << "array before sorting -" << endl;
    print_arr(arr, size);

    sort(arr, size);

    cout << "array after sorting" << endl;
    print_arr(arr, size);
}