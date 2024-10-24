#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<string> v;
     string s;
     cin>>s;
     int i=0;
     while( s[i]!='\0') 
 {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    {
    
       string temp;
       temp+=s[i];
       v.push_back(temp);
       for(int j=i+1;j<s.length();j++)
       {
         if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
         {
            temp+=s[j];
            v.push_back(temp);
         }
         else break;
         
       }
       
    }
    i++;
 }
 for(int x=0;x<v.size();x++)
   cout<<v[x]<<"  ";
cout<<endl<<"no of substring "<<v.size();
    

}