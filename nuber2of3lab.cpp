
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Type a character to check is it vowel or not : ";
    cin>>ch;
    if(ch=='a'||ch=='A' ||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<ch<<":is Vowel.";
    } else
    {
        cout<<ch<<":not Vowel.";}

  switch(ch){
        case'a':
        cout<<"vowel";
        break;
        case'e':
        cout<<":vowel";
        break;
        case'i':
        cout<<":vowel";
        break;
        case'o':
        cout<<":vowel";
        break;
        case'u':
        cout<<":vowel";
        break;
        case'A':
        cout<<":vowel";
        break;
        case'E':
        cout<<":vowel";
        break;
        case'I':
        cout<<":vowel";
        break;
        case'O':
        cout<<":vowel";
        break;
        case'U':
        cout<<":vowel";
        break;
        default:
            cout<<"Case default";
}
                 return 0;
}
