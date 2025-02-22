class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0,right = heights.size()-1;
        int ans = 0;
        while(left<right){
            ans = max(ans, min(heights[left],heights[right]) * (right - left));
            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};
