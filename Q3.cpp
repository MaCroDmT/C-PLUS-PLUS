#include<iostream>

int main()
{   int even_count=0;
    for(int i=0; i<20; i++)
    {
        if(i%2==0)
        {
            std::cout<<i<<"_THIS IS AN EVEN NUMBER\n";
            even_count++;
        }
        else
        {
            continue;
        }




    }
    std::cout<<even_count<<"_Are THE TOTAL NUMBER OF EVEN";
}
