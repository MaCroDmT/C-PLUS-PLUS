#include<iostream>
using namespace std;
int main()
{
    int m=200;
    float fx=100.80;
    char cht='z';
    cout<<"Pointer:Demonstrate the use of & and * operator"<<endl;
    int*pt1;
    float*pt2;
    char*pt3;
    pt1=&m;
    pt2=&fx;
    pt3=&cht;
    cout<<"m:"<<m<<endl;
    cout<<"fx="<<fx<<endl;
    cout<<"cht="<<cht<<endl;
    cout<<"\n using & operator:\n";
    cout<<"&m="<<&m<<endl;
    cout<<"&cht="<<&cht<<endl;
    cout<<"\n using & and * operator:\n";
    cout<<"*(&m)="<<*(&m)<<endl;
    cout<<"*(&fx)="<<*(&fx)<<endl;
    cout<<"*(&cht="<<*(&cht)<<endl;
    cout<<"\n using only pointer variable:\n";
    cout<<"pt1="<<pt1<<endl;
    cout<<"pt2="<<pt2<<endl;
    cout<<"pt3="<<pt3<<endl;
    cout<<"\n using only pointer operator:\n";
    cout<<"*pt1="<<*pt1<<endl;
    cout<<"*pt2="<<*pt2<<endl;
    cout<<"*pt3="<<*pt3<<endl;
}

