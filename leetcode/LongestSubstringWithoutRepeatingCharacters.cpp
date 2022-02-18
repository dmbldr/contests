class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> count;
        
        int best = 0;
        int more = 0;
        int j = 0;
        for (int i = 0; i < s.size(); ++i) {
            ++count[s[i]];
            if (count[s[i]] > 1) ++more;
            
            while (more != 0) {
                if (count[s[j]] > 1) --more;
                --count[s[j]];
                ++j;
            }
            
            best = max(best, i-j+1);
        }
        return best;
    }
};
