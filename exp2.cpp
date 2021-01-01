#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;

    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n>0)
    {
        sum=sum+n;
        cout<<"Enter a Number\n"<<endl;
        cin>>n;
    }
    cout<<"The Sum is"<<sum<<endl;

    return 0;
}