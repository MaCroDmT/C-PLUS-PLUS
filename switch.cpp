#include<iostream>
using namespace std;
int main()
{
     int arr[1000], size, i, del, count=0,n;

        cout<<"Enter array size( Max:1000 ): ";
        cin>>size;
        cout<<"\nEnter array elements: \n";
switch (1)
{
case '1':

    int n;
    cout<<"Provide the number of arrays you want to input:   ";
    cin>>n;

    int arr[n];
    int i;
    int element;

    cout<<"Provide the array elements: "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
        n++;

    cout<<"Provide the element that you want to insert:  "<<endl;
        cin>>element;
        arr[i] = element;

    cout<<" Now the new array is : "<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        break;
switch (2)
case '2':


int n;

    cout<<"The number of arrays that you want to take input:   ";
    cin>>n;


    cout<<"Provide the array elements: "<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int s = sizeof(arr)/sizeof(int);

    int del;
    cout<<"Provide the number of array you want to delete=  ";
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
break;

switch (3)
case '3':

for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element: ";
                cin>>arr[i];
        }

        cout<<"\nEnter element to be delete: ";
        cin>>del;

        for(i=0; i<size; i++)
        {
                if(arr[i]==del)
                {
                        for(int j=i; j<(size-1); j++)
                        {
                                arr[j]=arr[j+1];
                        }
                        count++;
                        break;
                }
        }
        if(count==0)
        {
                cout<<"\nElement not found.!!\n";
        }
        else
        {
                cout<<"\nElement deleted successfully.!!\n";
                cout<<"\nNow the new array is :\n";
                for(i=0; i<(size-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }
    cout<<"\n";
break;

    }

}
