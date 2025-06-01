#include<iostream>
using namespace std;

int main() {

   int arr[7],i;
     int *a=arr;
     cout<<"Enter seven elements:  \n";
     cin>>*a>>*(a+1)>>*(a+2)>>*(a+3)>> *(a+4)>>*(a+5)>>*(a+6);
     cout<<"Your entered seven elements in reversed order:  \n";
     for(i=6;i>=0;i--)
        cout<<*(a+i)<<endl;


     return 0;

}
