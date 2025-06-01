#include<iostream>
using namespace std;
int stk[5],top=-1;
void push (int a)
{
    top++;
    stk[top]=a;
}

void display()
{
    for(int i=0;i<top;i++)
    {
        cout<<stk[i]<<'\t';
    }
}
void peak()

{
  cout<<"top: "<<stk[top]<<endl;
}



int main()


{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();




}
