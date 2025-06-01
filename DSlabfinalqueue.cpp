#include<iostream>
using namespace std;
int const n=4;
int que[n],head=-1,tail=-1;
void enqueue(int a)
{
    if(tail== n-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if(head == -1)
    {
        head ++;

        tail ++;

        que[tail]=a;
    }
    else
    {
        tail ++;
        que [tail]=a;

    }
}
void display()
{
    for(int i=head;i<= tail;i++)
    {
        cout<<que[i]<<'\t';
    }
        cout<<endl;

}

int main()


{
    enqueue(10);
     enqueue(20);
     enqueue(30);
    enqueue(40);
     enqueue(50);
    display();




}
