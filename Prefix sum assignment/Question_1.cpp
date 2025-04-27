class NumArray {
    public:
        vector<int> v;
        NumArray(vector<int>& nums) {
            v=vector<int>(nums.begin(),nums.end());
            for(int i=1;i<v.size();i++)
            {
              v[i]=v[i-1]+nums[i];
            }
        }
        
        int sumRange(int left, int right) {
            if(left==0) return v[right];
            else return v[right]-v[left-1];
        }
    };
    
    /**
     * Your NumArray object will be instantiated and called as such:
     * NumArray* obj = new NumArray(nums);
     * int param_1 = obj->sumRange(left,right);
     */