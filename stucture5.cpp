#include <iostream>
using namespace std;
int main()
{
    struct
    {




        int roll;
        string name;
        int chem_mark;
        int math_mark;
        int phy_mark;
        int sum;
        int avg;


}std1;
    std1.name="prottoy";
    std1.roll=11;
    std1.chem_mark=90;
    std1.math_mark=100;
    std1.phy_mark=97;
    std1.sum;


    std1.sum=std1.chem_mark+std1.math_mark+std1.phy_mark;
    std1.avg=std1.sum/3;

    cout<<std1.roll<<endl;
    cout<<std1.name<<endl;
    cout<<std1.avg<<endl;
}



