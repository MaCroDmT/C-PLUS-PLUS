#include<iostream>
using namespace std;

int main() {

    int arr[10], i, s, j, p;

    cout << "Enter size of an array:";
    cin>>s;

    cout << "Enter array elements:";
    for (i = 0; i < s; i++) {
        cin >> arr[i];
    }

    cout << "All prime list:";

    for (i = 0; i < s; i++) {
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
