
#include<iostream>
using namespace std;
int main()
{
    int y , x ;
    cout<< "Enter x :";
    cin>>x;
    y=++x + ++x + ++x  ;
    cout<<"y=++x + ++x + ++x"<<y;
    return 0;
}
