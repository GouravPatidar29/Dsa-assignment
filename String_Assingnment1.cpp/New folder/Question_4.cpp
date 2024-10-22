#include<iostream>
#include<strings.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string str="abcdefgh";
  cout<<str;
  reverse(str.begin()+((str.size()/2)),str.end());
  cout<<endl<<str;

}