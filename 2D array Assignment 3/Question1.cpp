#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<vector<int>> v;
 
  vector<int> v1;
  v1.push_back(0);
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(0);
 
   vector<int> v2;
  v2.push_back(3);
  v2.push_back(4);
  v2.push_back(5);
  v2.push_back(2);
 
   vector<int> v3;
  v3.push_back(1);
  v3.push_back(3);
  v3.push_back(1);
  v3.push_back(5);

  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);
  int r=v.size();
  int c=v[0].size();
  if(r==0) return 0;

   vector<bool> ro(r,false);
   vector<bool> co(c,false);

   
  for (int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
{
    cout<<v[i][j]<<" ";
 }
 cout<<endl;
}
cout<<endl;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(v[i][j]==0)
        {
                ro[i]=true;
                co[j]=true;
        }
    }
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(ro[i] || co[j])
        {
                v[i][j]=0;
                
        }
    }
}
 for (int i=0;i<r;i++)
  {
  for(int j=0;j<c;j++)
 {
     cout<<v[i][j]<<" ";
  }
 cout<<endl;
 }
}