#include<iostream>

int main()
{
    int Number_1;
    int Number_2;

    std::cout<<"PLEASE ENTER THE 1ST NUMBER: ";
    std::cin>>Number_1;
    std::cout<<"PLEASE ENTER THE 2ND NUMBER: ";
    std::cin>>Number_2;

    int Addition_result=Number_1+Number_2;

    std::cout<<"SUM IS: "<<Addition_result<<'\n';

    int Subtraction_result=Number_1-Number_2;

    std::cout<<"SUBTRACTION IS: "<<Subtraction_result<<'\n';

    int Divison_result=Number_1/Number_2;

    std::cout<<"Division IS: "<<Divison_result<<'\n';

    int Multiplication_result=Number_1*Number_2;

    std::cout<<"MULTIPLICATION IS: "<<Multiplication_result<<'\n';


}
