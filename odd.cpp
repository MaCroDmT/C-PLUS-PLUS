#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout<<"Enter an Integer Number"<<endl;
    cin>>num;
    rem=num% 2 ;
    if (rem==0)
    cout<<num<<"is an Even Number";
    else
    cout<<num<<"is an odd Number" ;
    return 0;

}
