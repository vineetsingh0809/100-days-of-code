#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int key)
{
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;
    
    cout<<linearSearch(a, n, key)<<endl;

    return 0;
}