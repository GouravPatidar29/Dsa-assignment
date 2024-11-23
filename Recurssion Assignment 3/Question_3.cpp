#include<iostream>
using namespace std;
int findIndex(int arr[],int ele,int n)
{
    if(n<0)return -1;
    if(arr[n]==ele)return n;
    else{
        return findIndex(arr,ele,n-1);
    }
}
int main()
{
    int arr[]={15,1,3,4,5};
    int n=5;
    cout<<findIndex(arr,1,n-1);
}