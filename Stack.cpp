#include <iostream>



using namespace std;



int const n=4;
int stk[n],top=-1;



void push(int a)
{
    if (top == n-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        stk[top]=a;
    }



}



void display()
{
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }
    for (int i = 0 ; i <= top; i++)
    {
        cout<<stk[i]<<'\t';
    }
    cout<<endl;
}



void peak()
{
    if (top == -1)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }
    cout<<"Top :"<<stk[top]<<endl;
}



void pop()
{
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
    cout<<stk[top]<<" is popped"<<endl;
    top--;}
}



int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    peak();
    push(50);
    pop();
    peak();
    display();
    pop();
    pop();
    pop();
    pop();
    display();
    peak();



}
