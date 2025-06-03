#include <iostream>
using namespace std;


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int k = step - 1;


    while (key < array[k] && k>=0) {
      array[k+1] = array[k];
      --k;
    }
    array[k+1] = key;
  }
}

int main() {
  int data[] = {92, 52, 16, 49, 30};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "insertion sort is:\n";
  printArray(data, size);
}
