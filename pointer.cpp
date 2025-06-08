#include<iostream>
using namespace std;
int main()
{
int A[6]={10,11,12,13,14,15};
for (int i=0;i<6;i++)
    {
        cout<<A[i]<<endl<<endl;

    }

for(int i=0;i<6;i++)
{
    cout<<'&(A++)'<<endl<<endl;
}
cout<<'*A++'<<endl;
cout<<'(*A)++'<<endl;
cout<<'*(A+2)'<<endl;



}
