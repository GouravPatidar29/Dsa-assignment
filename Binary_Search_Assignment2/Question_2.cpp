#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,6,15,19,20};
    int n=7;
    int lo=0;
    int hi=1;
    int target=4;
    bool ans=false;     
    while(arr[hi]<target)
    {
        lo=hi;
        hi=2*hi;
    }
    cout<<"low="<<lo<<"high="<<hi<<endl;
        while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
           ans=true;
           break;
        }
        else if(arr[mid]>target)hi=mid-1;
        else lo=mid+1;
    }
    if(ans==false)
        cout<<"Target is not present";
    else 
      cout<<"Target is Present";

}