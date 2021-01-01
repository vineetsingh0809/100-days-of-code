#include<iostream>
using namespace std;

int main()
{
    char c;

    cout<<"Enter an Alphabet: ";
    cin>>c;

    switch (c)
    {
    case 'a':
        cout<<"It is a Vowel"<<endl;
        break;

    case 'e':
        cout<<"It is a Vowel"<<endl;
        break;

    case 'i':
        cout<<"It is a Vowel"<<endl;
        break;

    case 'o':
        cout<<"It is a Vowel"<<endl;
        break;

    case 'u':
        cout<<"It is a Vowel"<<endl;
        break;
    
    default:
        cout<<"It is a Constant"<<endl;
        break;
    }
    return 0;
}