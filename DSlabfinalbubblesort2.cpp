#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[5] = {2,5,3,1,8};


for(i = 0; i<5; i++) {
   for(j = i+1; j<5; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element \n";
for(i = 0; i<5; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of swap:"<<pass<<endl;
return 0;
}
