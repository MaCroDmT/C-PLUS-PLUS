#include<iostream>

int main()
{

    char Input;
    std::cout<<"PLEASE ENTER AN ALPHABET: "<<'\n';
    std::cin>>Input;
    char A='a';
     char E='e';
      char I='i';
       char O='o';
        char U='u';
         char a='A';
          char e='E';
           char i='I';
            char o='O';
             char u='U';

             if( Input==A ||  Input==E ||  Input==I || Input==O ||  Input==U || Input==a||  Input==e||  Input==i || Input==o ||  Input==u)
             {
                 std::cout<<"YOUR ENTERED INPUT IS AN VOWEL"<<'\n';


             }


             else
             {
                 std::cout<<"YOUR ENTERED INPUT IS AN CONSONENT";
             }
}
