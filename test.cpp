#include <iostream>
using namespace std;

int main(){
    int input[10], output[10], count, i;

    cout << "Enter number of elements in array\n";
    cin >> count;

    cout << "Enter " << count << " numbers \n";

    for(i = 0; i < count; i++){
        cin >> input[i];
    }
}

