#include <iostream>
using namespace std;

int main()
{

    int temp;
    cout<<"temp:"<<endl;
    cin >> temp;
    if(temp>=40){
        cout << "Its very hot" << endl;
    }
    else if (temp>=30){
        cout << "Its Hot" << endl;
    }
    else if (temp>=20){
        cout << "Normal in Temp" << endl;
    }
    else if (temp>=10){
        cout << "Cold weather" << endl;
    }
    else if (temp>=0){
        cout << "Very Cold weather" << endl;
    }
    else {
        cout << "Freezing weather" << endl;
    }
	return 0;
}
