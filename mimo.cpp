#include<iostream>
using namespace std;
int main()
{



int mimo[5], a, b, i; // declaration of a new array
mimo[2] = 75;         // store 75 in the third element of mimo
a = mimo[2];          // copy/assign a with the third value of mimo
cin >> mimo[2]; // read a value for the third element of mimo
/* read 5 values for the five elements of mimo sequentially */
for(i=0; i<5; i++)
	cin >> mimo[i];
/* print 5 values for the five elements of mimo sequentially */
for(i=0; i<5; i++)     ;
	cin >> mimo[i];
/* some more interesting accesses */
a = 4;
mimo[2] = a;
mimo[a] = 3;
b = mimo[a-2] + 2;	//use of expression in index
mimo[mimo[a]] = mimo[2] + b;
int mimo1[10] = {32,4,5,12,15,54,6,23,3,5}; // declaration of a new array
int n;
cout<<"Enter the number to be searched:" <<endl;
cin>>n; // inputting the number to be searched in the array
for(int i=0; i<10; i++){ // searching begins
	if (n == mimo[i]){
	  break; // searching ends
	}
   }


  cout<<n<<"was found in index"<<i<<"of the array"<<endl;

    }
