#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void minarray(int arr[],int idx,int n,int& ans)
{
   if(n==1)
   {  ans=arr[0];
      return ;
   }
   if(idx==n)return ;
   if(arr[idx]<ans) {
    ans=arr[idx];
    minarray(arr,idx+1,n,ans);
    }
    else minarray(arr,idx+1,n,ans);
   }
int main()
{
  int arr[]={20,5,8,1,10,0,-1};
  int ans=INT_MAX;
  minarray(arr,0,7,ans);
  cout<<ans;
}