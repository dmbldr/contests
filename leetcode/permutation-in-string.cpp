class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> freq1(26);
        vector<int> freq2(26);
        for(int i = 0; i < s1.size(); ++i)
        {
            ++freq1[s1[i] - 'a'];
            ++freq2[s2[i] - 'a'];
        }
        
        int l = 0;
        for(int r = s1.size(); r < s2.size(); ++r)
        {
            if(isEquel(freq1, freq2)) return true;
            ++freq2[s2[r] - 'a'];
            --freq2[s2[l++] - 'a'];
        }
        return isEquel(freq1, freq2);
    }
    
    bool isEquel(const vector<int>& x, const vector<int>& y)
    {
        for(int i = 0; i < 26; ++i)
        {
            if(x[i] != y[i]) return false;
        }
        return true;
    }
};
