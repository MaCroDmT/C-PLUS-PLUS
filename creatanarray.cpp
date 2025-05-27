#include<iostream>
using namespace std;
int main()
{
 int arr[]={40,90,88,85,89,99,87,78};
 int arr2[]={41,90,88,85,89,99,87,78};
 int len=sizeof(arr)/sizeof(int);
int a= sizeof(arr)/sizeof(int);
int b=sizeof(arr2)/sizeof(int);
int c=a+b;
int arr3[c];
for (int i=0;i<10;i++)
{
    if (i<a)
    {
        arr3[i]=arr2[i-a];

    }
}
for (int i=0;i<10;i++)
{
    cout<<arr3[i]<<'t';
}


}
