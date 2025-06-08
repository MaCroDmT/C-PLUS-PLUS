#include<iostream>
using namespace std;
int permutation(int n,int r);
int combination(int n,int r);
int factorial(int num);
int main(void)
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<("permutation=fact (n)%fact (n-r)",permutation(n,r))<<endl;
    cout<<("combination=fact n",combination(n,r))<<endl;


    return 0;
}
 int permutation(int n,int r)
 {
     return factorial(n)/factorial(n-r);
 }
int combination(int n,int r)
{
    return permutation(n,r)/factorial(r);

}
int factorial(int num){
double fact=1;
while(num>0)
{
    fact*=num;
    num--;
}

return fact;
}
