#include<iostream>

int main()
{
    int a;

    std::cout<<"PLEASE ENTER AN VALUE A: ";
    std::cin>>a;

    int b;

    std::cout<<"PLEASE ENTER AN VALUE B: ";
    std::cin>>b;

    int temp=a;

    a=b;

    b=temp;

    std::cout<<"SWAPPED VALUE: "<<b;


}
