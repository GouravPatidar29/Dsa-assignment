#include<iostream>
using namespace std;

    int numberOfSteps(int num) {
        if(num==0)return 0;
        if(num%2==0)
        {
            int ans=numberOfSteps(num/2);
            return ans+1;
        }
        if(num%2!=0) 
        {
            int ans=numberOfSteps(num-1);
            return ans+1;
        }
        return 0;
        
    }
int main()
{
   cout<<numberOfSteps(14);
}