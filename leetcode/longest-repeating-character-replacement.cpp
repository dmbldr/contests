class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int l = 0;
        int ans = 0;
        int freq = 0;
        for(int r = 0; r < s.size(); ++r)
        {
            ++count[s[r]];
            if(r - l + 1 - getMaxCount(count) > k)
            {
                --count[s[l]];
                ++l;
            }
            
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
    
    int getMaxCount(const unordered_map<char, int>& count)
    {
        int max = 0;
        for(const auto& el : count)
        {
            if(el.second > max) max = el.second;
        }
        return max;
    }
};
