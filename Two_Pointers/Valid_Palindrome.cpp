// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string st = "";
//         for(auto&c : s){
//             c = tolower(c);
//             if(c >= 'a' && c<='z' || c>='0' && c<='9')
//                 st.push_back(c);   
//         }
//         if(st.empty() || st.length()==1)
//             return true;
//         bool ans =false;
//         cout<< st ;
//         int left =0, right = st.length()-1;
//         while(left < right){
//             if(st[left] < 'a' || st[left] > 'z')
//                 left++;
//             else if(st[right] < 'a' || st[right] > 'z')
//                 right--;
//             else if(st[left] == st[right]){
//                 left++;
//                 right--;
//                 ans = true;
//             }
//             else
//                 return false;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    bool isPalindrome(string s) {
        string st= "";
        for (char c : s) {
            if (isalnum(c)) {
                st += tolower(c);
            }
        }
        return st == string(st.rbegin(), st.rend());
    }
};
