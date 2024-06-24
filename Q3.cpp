#include<iostream>

int main()
{
    int my_Number;
    std::cout<<"PLEASE ENTER AN INTEGER NUMBER: ";
    std::cin>>my_Number;

    if(my_Number/2==0)
    {
        std::cout<<"THIS IS AN EVEN NUMBER";

    }
    else
    {
        std::cout<<"THIS IS AN ODD NUMBER";
    }
}
