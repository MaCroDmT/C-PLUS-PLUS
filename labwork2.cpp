
#include<iostream>
using namespace std;
int main()
{
    string name;
    int roll;
    float sub1,sub2,sub3, sub4, sub5, sumofsub;
    float score;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your roll number:";
    cout<<roll;
    cout<<"Enter marks of the five subjects;";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    score =(sumofsub/50)*100;
    cout<<"your name is:"<<name<<endl;
    cout<<"your roll number is:"<<roll<<endl;
    cout<<"your total score is "<<score;
    return 0;
}
