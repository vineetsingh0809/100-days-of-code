#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter that number as many elements you want to enter in the array: ";
    cin>>n;

    int maxNo = INT8_MIN;
    int minNo = INT8_MAX;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of the array"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] > maxNo){
            maxNo = a[i];
        }
        if(a[i] < minNo){
            minNo = a[i];
        }
    }

    cout<<"Maximum number is: ";
    cout<<maxNo<<endl;
    cout<<"Mimimum number is: ";
    cout<<minNo<<endl;

    return 0;
}