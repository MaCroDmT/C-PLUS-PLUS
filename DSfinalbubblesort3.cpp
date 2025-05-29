#include <iostream>
using namespace std;



int main()
{
    int arr [] = {2,5,3,1,8};
    int cnt=0;
    while (true){

       for(int i=1;i<(sizeof(arr)/sizeof(int));i++)
       {
           if(arr[i-1].arr[i]&& cnt !=0)
           {
               swap(arr[i-1],arr[i]);
               cnt++;
           }
       }
        for (int i=0;i<(sizeof(arr)/sizeof(int));i++)
        {

        }
    }
    n=sizeof(arr)/sizeof(int);
}
