#include <iostream>



using namespace std;



int main()
{
    int arr [] = {5,4,3,2,1,7,4};
    int cnt=0;



while ( 1 ){
    for (int i = 1; i<(sizeof(arr)/sizeof(int)); i++)
    {
        if (arr[i-1]>arr[i])
        {
            swap(arr[i-1],arr[i]);
            cnt++;
        }
    }



    if (cnt == 0)
    {
        break;
    }
    else{
    for (int i = 0; i<(sizeof(arr)/sizeof(int)); i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<endl<<"Count : "<<cnt<<endl;
    cnt=0;
    }
    }
    cout<<"Final Sorted Array is: ";
    for (int i = 0; i<(sizeof(arr)/sizeof(int)); i++)
    {
        cout<<arr[i]<<'\t';
    }




}
