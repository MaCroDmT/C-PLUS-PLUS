#include<iostream>
using namespace std;
int main()
{

        int n;
        cout<<"Provide the number of arrays you want to input:";
        cin>>n;

    int arr[n];
    int i;
    int element;

        cout<<"Provide the array elements: "<<endl;
        for(i=0;i<n;i++)
        cin>>arr[i];
        n++;

    cout<<"Provide the element that you want to insert: "<<endl;
    cin>>element;
    arr[i] = element;

        cout<<" Now the new array is : "<<endl;
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0;

}
