class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq;
        map<int,int> mp;
        for(int& i : nums)
            mp[i]++;
        
        vector<pair<int,int>> vec;
        for(auto& i : mp)
            vec.push_back({i.second,i.first});
        sort(vec.rbegin(),vec.rend());

        for(int i=0;i<k;++i)
            freq.push_back(vec[i].second);
        return freq;
    }
};
