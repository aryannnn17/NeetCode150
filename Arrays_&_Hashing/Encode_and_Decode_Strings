class Solution {
public:
    string encode(vector<string>& strs) {
        if (strs.empty()) 
            return "";
        vector<int> sizes;
        string res = "";
        for (string& s : strs) 
            sizes.push_back(s.size());
        
        for (int n : sizes) 
            res += to_string(n) + ',';
        
        res += '#';
        for (string& s : strs) 
            res += s;
        
        return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) 
            return {};
        vector<int> sizes;
        vector<string> res;
        int i = 0;
        while (s[i] != '#') {
            string curr = "";
            while (s[i] != ',') {
                curr += s[i];
                i++;
            }
            sizes.push_back(stoi(curr));
            i++;
        }
        i++;
        for (int n : sizes) {
            res.push_back(s.substr(i, n));
            i += n;
        }
        return res;
    }
};
