

class Solution {
public:

        int lengthOfLongestSubstring(string s) {
        int n =s.length();
        unordered_map<char, bool> map;
        int left = 0;
        int right = 0;
        int maxLen =0;
        while (right<n) {
            if (map.find(s[right])!=map.end()) {
                maxLen=max(maxLen, right-left);
                while (s[left]!=s[right]) {
                    map.erase(s[left]);
                    left++;
                }
                left++;
            } else {
                map[s[right]]=true;
            }
            right++;
        }
        
        maxLen = max(maxLen, right-left);
        return maxLen;
    }

};
