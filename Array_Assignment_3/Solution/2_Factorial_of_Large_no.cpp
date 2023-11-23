#include<iostream>
#include<vector>
using namespace std;
void mul(vector<int>& arr,int& size,int m)
{
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int res=m*arr[i];
        res=res+carry;
        arr[i]=res%10;
        carry=res/10;
    }
    while(carry>0)
    {
        arr[size]=carry%10;
        size++;
        carry=carry/10;
    }
  
}
  void  reversePart(vector<int> &v,int i,int j)
 {
      while (i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp; 
        i++;
        j--;  
         }
         
 }
int main()
{
    int x;
    cout<<"Enter the no";
    cin>>x;
    vector<int> arr(10000,0);
    arr[0]=1;
    int size=1;
    for(int m=2;m<=x;m++)
    {
        mul(arr,size,m);
    }
    reversePart(arr,0,size-1);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<"  ";
}
