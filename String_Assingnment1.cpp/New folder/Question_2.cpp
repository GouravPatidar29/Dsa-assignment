#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i=0,count=0;
  while(s[i]!='\0')
  {
    
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
     i++;
     else{
      count++;
      i++;
     }
    }
  
  cout<<count;
}