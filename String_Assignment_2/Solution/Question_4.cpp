#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     //anargam
     string s,t;
     cout<<"enter the first string ";
     cin>>s;
     cout<<"enter the second string ";
     cin>>t;
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     if(s==t)
     {
        cout<<"is anagrams";
     }
     else cout<<"not anagram";


    

}