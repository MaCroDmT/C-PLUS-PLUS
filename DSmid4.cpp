//Pointer Program to swap 2 numbers without using 3rd variable

        #include <iostream>
    using namespace std;
    int main()
    {
    int a=40,b=20,*p1=&a,*p2=&b;
    cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;
       return 0;
    }
