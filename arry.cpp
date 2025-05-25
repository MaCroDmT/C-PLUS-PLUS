
#include <iostream>
using namespace std;
int main (void)
{
const char baseDigits[10] = {
'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9' };
int convertedNumber[64];
long int numberToConvert;
int nextDigit, base, index = 0;
// get the number and the base
cout<<"Number to be converted? "<<endl;
cin>>numberToConvert;
cout<<"Base? "<<endl;
cin>>base;
do {
	convertedNumber[index] = numberToConvert % base;
	++index;
	numberToConvert = numberToConvert / base;
}
while ( numberToConvert != 0 );
// display the results in reverse order
cout<<"Converted number = ";
for (--index; index >= 0; --index )
    {
	nextDigit = convertedNumber[index];
	cout<<baseDigits[nextDigit];
	}
return 0;
}
