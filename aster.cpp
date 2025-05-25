
#include <iostream>
using namespace std;
int main (void)
{
int count = 10, x;
int *int_pointer;
int_pointer = &count;
x = *int_pointer;
cout<<"count="<<count<<endl;
cout<<"x="<<x<<endl;

return 0;
}

