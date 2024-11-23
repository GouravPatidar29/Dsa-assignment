#include<iostream>
using namespace std;
int sum(int arr[],int idx,int n)
{
   if(idx==n)return 0;
    return arr[idx]+sum(arr,idx+1,n);
}
int main()
{
    int arr[]={15,2,3,4,5};
    int n=5;
    cout<<sum(arr,0,n);
}