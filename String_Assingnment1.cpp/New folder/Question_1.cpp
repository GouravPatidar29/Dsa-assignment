#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int i=0;
  while(str[i]!='\0')
  {
    if(i%2==0) i++;
    else
    {
        str[i]='#';
        i++;
    }
  }
  cout<<str;
}