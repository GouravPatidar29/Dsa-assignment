#include<iostream>
using namespace std;
int main()
{
    int n=35;
    int low=1,high=n;
    while(low<=high)
    {
        long long int mid=low+(high-low)/2;
        if((long long int)mid*mid==n)
        {
            cout<<"number is perfect square";
            return 0;
        }
    
        else if((long long int)mid*mid<n)low=mid+1;
        else high=mid-1;
    }
    cout<<"not perfect Square";
}