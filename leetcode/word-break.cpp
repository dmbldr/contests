class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        for(auto& word : wordDict)
        {
            dict.emplace(move(word));
        }
        bool dp[s.size() + 1];
        dp[0] = true;
        for(int i = 1; i <= s.size(); ++i)
        {
            for(int j = i - 1; j >= 0; --j)
            {
                dp[i] = dp[j] && (dict.find(s.substr(j, i - j)) != dict.end());
                if(dp[i]) break;
            }
        }
        return dp[s.size()];
    }
};
