#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     vector<string> v;
    
     stringstream ss(s);
     string temp;
    while(ss>>temp)
      v.push_back(temp);
      
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
    

    

}