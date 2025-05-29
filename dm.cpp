#include<iostream>
using namespace std;
void print(bool,bool,bool);
int main()
{
    bool A=false,B=false,C=false;
    cout<<boolalpha;
    cout<<"A\tB\tC\tA&&B\tA||B\tB&&C\tB||C\tC&&A\tC||A\t!A\t!B\t!C"<<endl;


    print(A,B,C);
    C=!C;
    print(A,B,C);
    B=!B;
    C=!C;
    print(A,B,C);
    C=!C;
    print(A,B,C);
    A=!A;
    B=!B;
    C=!C;
    print(A,B,C);
    C=!C;
    print(A,B,C);
    B=!B;
    C=!C;
    print(A,B,C);
     C=!C;
    print(A,B,C);
    return 0;
}
void print(bool a,bool b,bool c)
{
    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<(a&&b)<<'\t'<<(a||b)<<'\t'<<(b&&c)<<'\t'<<(b||c)<<'\t'<<(c&&a)<<'\t'<<(c||b)<<'\t'<<(!a)<<'\t'<<(!b)<<'\t'<<(!c)<<endl;
    return;
}
