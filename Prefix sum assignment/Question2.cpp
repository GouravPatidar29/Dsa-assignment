class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int n= nums.size();
            vector<int> sumleft(n);
            vector<int> sumright(n);
            sumleft[0]=nums[0];
            sumright[n-1]=nums[n-1];
            for(int i=1,j=n-2;i<n,j>=0;i++,j--)
            {
              sumleft[i]=sumleft[i-1]+nums[i];
              sumright[j]=sumright[j+1]+nums[j];
            }
            for(int i=0;i<n;i++)
            {
               if(sumleft[i]==sumright[i])return i;
            }
            return -1;
        }
    };