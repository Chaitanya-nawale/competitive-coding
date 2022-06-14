class Solution {
public:
    int minDistance(string s1, string s2) {
        vector<int>dp ( s2.length() + 1 );
        for (int i = 0; i <= s1.length(); i++) {
            vector<int>temp ( s2.length() + 1 );
            for (int j = 0; j <= s2.length(); j++) {
                if (i == 0 || j == 0)
                    temp[j] = i + j;
                else if (s1[i - 1] == s2[j - 1])
                    temp[j] = dp[j - 1];
                else
                    temp[j] = 1 + min(dp[j], temp[j - 1]);
            }
            dp=temp;
        }
        return dp[s2.length()];
    }
};