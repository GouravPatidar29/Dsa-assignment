#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v={3,8,6,7,5,9,10};
   int idx1=-1,idx2=-1;
   for(int i=0;i<v.size()-1;i++)
   {
    if(v[i]>v[i+1])
    {
        if(idx1==-1)
        {
            idx1=i;
        }
        else idx2=i+1;
    }
   }
   swap(v[idx1],v[idx2]);
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
}