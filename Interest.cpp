#include<iostream>
using namespace std;
int main()
{
    int p,t,r,interest;
    std::cout<<"please enter the value of p,t & r";
    std::cin>>p>>t>>r;
    interest=p*t*r/100;
    std::cout<<interest;
    return 0;
}
