#include <iostream>
using namespace std;

int main() {

   int arr[7], i, sum = 0;
    int *ptr;

    cout << "Enter 7 numbers :  \n";
    for (i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    ptr = arr;
    for (i = 0; i < 7; i++) {
        sum = sum + *(ptr + i);
    }

    cout << "Sum of the array elements is :" << sum;

    return 0;

}
