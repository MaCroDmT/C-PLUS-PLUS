#include <iostream>
using namespace std;

// iterative implementation
int binarySearch(int a[], int item, int first, int last)
{
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (item == a[mid])
            return mid + 1;
        else if (item > a[mid])
            first= mid + 1;
        else
            last = mid - 1;
    }

    return ;
}

// Function to sort an array a[] of size 'n'
void insertionSort(int a[], int n)
{
    int i, loc, j, k, selected;

    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];

        // find location where selected should be inseretd
        loc = binarySearch(a, selected, 0, j);

        // Move all elements after location to create space
        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }
}

// Driver Code
int main()
{
    int a[]
        = { 37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54 };
    int n = sizeof(a) / sizeof(a[0]), i;

    insertionSort(a, n);

    cout <<"Sorted array: \n";
    for (i = 0; i < n; i++)
        cout <<" "<< a[i];

    return 0;
}
