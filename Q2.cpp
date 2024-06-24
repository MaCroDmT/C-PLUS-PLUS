#include<iostream>

int main()
{
    int Principal;
    std::cout<<"PRINCIPAL AMOUT IS: ";
    std::cin>>Principal;

    int rate;
    std::cout<<"RATE IS: ";
    std::cin>>rate;

    int time;
    std::cout<<"TIME IS: ";
    std::cin>>time;

    int interest_RATE;
    interest_RATE=(Principal*rate*time)/100;

    std::cout<<"TOTAL INTEREST RATE IS: "<<interest_RATE;
}
