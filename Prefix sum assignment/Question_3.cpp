class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> cov(n);
        int j=1,maxnum=nums[0];
        cov[0]=nums[0]*2;
        while(j<n)
        {
         if(nums[j]>maxnum){
            cov[j]=nums[j]+nums[j];
            maxnum=nums[j];
         }
         else cov[j]=nums[j]+maxnum; 
         j++;
        }
        for(int i=1;i<n;i++)
        {
           cov[i]=cov[i-1]+cov[i];
        }
        return cov;
    }
};