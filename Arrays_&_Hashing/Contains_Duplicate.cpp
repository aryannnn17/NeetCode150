class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0 || nums.size()==1)
            return false;
        for(int i =0;i<nums.size()-1;++i)
            if(nums[i]==nums[i+1])
                return true;
        return false;
    }
};
