// APPROACH - 1 (COUNT CHAR FREQUENCIES OF BOTH STRINGS)
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq_s(26,0);
        vector<int> freq_t(26,0);
        for(char& c: s)
            freq_s[c-'a']++;
        for(char& c: t)
            freq_t[c-'a']++;
        if(freq_s==freq_t)
            return true;
        return false;
    }
};

// APPROACH - 2 (SORTING BOTH STRINGS)
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;
    }
};
