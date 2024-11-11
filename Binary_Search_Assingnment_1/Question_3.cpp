#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
 int arr[4][4]={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
 int n=4;
 
    
    int maxo=INT_MIN,res=0;
    for(int i=0;i<n;i++)
    {
        int lo=0;
    int hi=n-1;
    int idx=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[i][mid]==1)
        {
            idx=mid;
              hi=mid-1;
            
        }
        else 
        {
            lo=mid+1;
        }
       
    }  
    int x=(idx!=-1)?(n-idx):0; 
    cout<<endl;
    if(x>maxo)
    {
      maxo=x;
      res=i;
      
    }
    }
    cout<<"Row with max zeros is "<<res;
}