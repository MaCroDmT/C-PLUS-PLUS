#include<iostream>
#include <algorithm>
int main()
{
    int Number_1;
    int Number_2;
    int Number_3;

    std::cout<<"ENTER THE FIRST NUMBER: ";

    std::cin>>Number_1;

    std::cout<<"ENTER THE SECOND NUMBER: ";

    std::cin>>Number_2;

    std::cout<<"ENTER THE THIRD NUMBER: ";

    std::cin>>Number_3;

    if(Number_1>Number_2 && Number_1>Number_3)
    {
        std::cout<<"LARGEST NUMBER IS: "<<Number_1<<'\n';
    }
    if(Number_2>Number_1 && Number_2>Number_3)
    {
        std::cout<<"LARGEST NUMBER IS: "<<Number_2<<'\n';
    }
    if(Number_3>Number_1 && Number_3>Number_2)
    {
        std::cout<<"LARGEST NUMBER IS: "<<Number_3<<'\n';
    }

    if(Number_1<Number_2 && Number_1<Number_3)
    {
        std::cout<<"SMALLEST NUMBER IS: "<<Number_3<<'\n';
    }

    if(Number_2<Number_3 && Number_2<Number_1)
    {
        std::cout<<"SMALLEST NUMBER IS: "<<Number_2<<'\n';
    }

     if(Number_3<Number_1 && Number_3<Number_2)
    {
        std::cout<<"SMALLEST NUMBER IS: "<<Number_3<<'\n';
    }
}
