#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,nofswap=0;
   int a[9] = {10,2,0,14,43,25,18,1,5};
   cout <<"Input list\n";
   for(i = 0; i<9; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<9; i++) {
   for(j = i+1; j<9; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
nofswap++;
}
cout <<"Bubble sort is:\n";
for(i = 0; i<9; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\n nofswap:"<<nofswap<<endl;
return 0;
}
