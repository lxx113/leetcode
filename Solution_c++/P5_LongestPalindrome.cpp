class Solution {
public:

    string longestPalindrome(string s) {
        
        int maxLen = 0;
        int maxStart = 0;
        int n = s.length();
        int dp[n][n];  
        memset(dp, 0, n*n*sizeof(int));  
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
            maxLen = 1;
            maxStart = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <i; j++) {
                //dp[j][i] = (s[j] == s[i] && (i-j<2 || dp[j+1][i-1]));
                if (s[j] == s[i] && (i-j<2 || dp[j+1][i-1])) {
                    dp[j][i] = 1;
                }
                
                if (dp[j][i]) {
                    if (i-j+1>maxLen) {
                        maxLen = i-j+1;
                        maxStart = j;
                    }
                }
            }
        }
        
        return s.substr(maxStart, maxLen);
    }
