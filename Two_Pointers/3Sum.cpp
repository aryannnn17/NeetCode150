class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> triplets;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;++i){
        int left = i+1, right = nums.size()-1;
        while(left<right){
        vector<int> n;
        n.push_back(nums[i]);
            if(nums[i]+ nums[left] + nums[right] == 0){
                n.push_back(nums[left]);
                n.push_back(nums[right]);
                sort(n.begin(),n.end());
                left++;
                right--;
                if(find(triplets.begin(),triplets.end(),n)==triplets.end())
                    triplets.push_back(n);
            }
            else if(nums[i]+ nums[left] + nums[right] > 0)
                right--;
            else if(nums[i]+ nums[left] + nums[right] < 0)
                left++;
            }
        }
        return triplets;
    }
};
