#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout<<"The number of arrays that you want to take input:";
    cin>>n;

    int arr[n];
    cout<<"Provide the array elements: "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int s = sizeof(arr)/sizeof(int);

    int del;
    cout<<"Provide the number of array you want to delete=";
    cin>>del;
    int a = del;

    int temp [s-1];

        for (int i = 0; i<s; i++)
        {
            if (i<a)
                {
                    temp [i]=arr[i];
                }
        else if (i>a)
                {
                    temp [i-1]=arr[i];
                }
        }

        for(int i = 0 ; i<s-1;i++)
        {
            cout<<temp[i]<<endl;
        }

    return 0;
}
