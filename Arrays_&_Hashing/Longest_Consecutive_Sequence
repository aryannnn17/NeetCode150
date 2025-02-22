class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = 1;
        int ans =1;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                continue;
            else if(nums[i]+1 == nums[i+1])
                len++;
            else
                len =1;
            ans = max(ans,len);
        }
        return ans;
    }
};
