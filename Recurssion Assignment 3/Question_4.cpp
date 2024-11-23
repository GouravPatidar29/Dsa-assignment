#include<iostream>
using namespace std;
void printReverse(int arr[],int n)
{
    if(n<0)return;
    else{
        cout<<arr[n]<<" ";
         printReverse(arr,n-1);
    }
}
int main()
{
int arr[]={15,1,3,4,5};
    int n=5;
    printReverse(arr,n-1);
}