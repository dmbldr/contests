class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        permutation(result, s, 0);
        return result;
    }
    
    void permutation(vector<string>& result, string& s, int k)
    {
        while(k < s.size() && '0' <= s[k] && s[k] <= '9') 
        {
            ++k;
        }
        if(k == s.size()) 
        {
            result.push_back(s);
            return;
        }
        
        s[k] = tolower(s[k]);
        permutation(result, s, k + 1);
        s[k] = toupper(s[k]);
        permutation(result, s, k + 1);
        s[k] = tolower(s[k]);
    }
};
