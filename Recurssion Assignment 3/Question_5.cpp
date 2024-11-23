#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  storeSubset(vector<int> ans,vector<int> nums,vector<vector<int>>& v,int idx,bool flag)
{
   if(idx==nums.size())
    {
     v.push_back(ans);
     return;
    }
    int ch=nums[idx];
    if(idx==nums.size()-1)
     {  
          if(flag==true)  
          {
            ans.push_back(ch);
            storeSubset(ans,nums,v,idx+1,true);
            ans.pop_back();
          }
           storeSubset(ans,nums,v,idx+1,true);
           return;
    }
      int dh=nums[idx+1];
      if(ch==dh)
    {
       if(flag==true)  
       {
        ans.push_back(ch);
        storeSubset(ans,nums,v,idx+1,true);
        ans.pop_back();
        }
       storeSubset(ans,nums,v,idx+1,false);
    }
    else
     {
        if(flag==true){
            ans.push_back(ch);
          storeSubset(ans,nums,v,idx+1,true);
          ans.pop_back();
        }
        storeSubset(ans,nums,v,idx+1,true);
     }
}
    int main() {
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(2);
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> v;
        storeSubset(ans,nums,v,0,true);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
              cout<<v[i][j];
            cout<<endl;
        }

    }

