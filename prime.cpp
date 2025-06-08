#include<iostream>
using namespace std;

int main() {

    int arr[10]={22,25,26,28,45,49,77,90,99,1000};
    int i,n,j,p;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "All prime list:";

    for (i = 0; i < n; i++) {
        j = 2;
        p = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
