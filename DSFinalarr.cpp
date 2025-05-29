#include<iostream>
using namespace std;
int main()
{

    int arr []=(10,12,6,14,15);
    int elements =6;
    int checking =0;
    int flag=0;
    for(int i=0;i<=sizeof(arr)/sizeof(int);i++)
    {
        if(arr[i]== elements)

        cout<<"Found at index"<<i<<endl;
    }
}
