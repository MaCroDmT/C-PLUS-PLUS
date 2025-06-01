#include <iostream>
using namespace std;



void square(int []);


int main()
{
    int array[] = {20,22,14};

    square(array);
    for(auto i : array)
        cout << i << " ";

}



void square(int array[])
{
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<= size; i++)
        array[i] *= array[i];
}
