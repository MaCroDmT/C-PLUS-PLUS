
#include<iostream>
using namespace std;
int main()
{
    int y , x ,z;
    cout<< "Enter x :";
    cin>>x;
    cout<<"Enter z :";
    cin>>z;
    y=x>>2 + z<<1 ;
    cout<<"y=x>>2 + z<<1"<<y;
    return 0;
}
