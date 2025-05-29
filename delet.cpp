#include <iostream>



using namespace std;



int main()
{
int arr [] = {1,2,3,4,5};



int s = sizeof(arr)/sizeof(int);



int ser = 2;



int temp [s-1];



for (int i = 0; i<s; i++)
{
if (i<ser){
//cout<<arr[i]<<endl;
temp [i]=arr[i];
}
else if (i>ser){
temp [i-1]=arr[i];
}
}



for(int i = 0 ; i<s-1;i++)
{
cout<<temp[i]<<endl;
}



}
