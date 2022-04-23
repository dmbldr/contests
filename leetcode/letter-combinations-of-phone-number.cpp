class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size() == 0) return result;
        string comb;
        backtrack(result, comb, digits, 0);
        return result;
    }
    
    void backtrack(vector<string>& result, string& comb, const string& digits, int i)
    {
        if(comb.size() == digits.size())
        {
            result.push_back(comb);
            return;
        }
        
        for(int j = 0; j < 4; ++j)
        {
            if(digits[i] != '7' && digits[i] != '9' && j == 3) continue;
            comb.push_back(getLetter(digits[i], j));
            backtrack(result, comb, digits, i + 1);
            comb.pop_back();
        }
    }
    
    char getLetter(char digit, int i)
    {
        int num = digit - 48 - 2;
        if(digit == '8' || digit == '9') ++i;
        return 'a' + num * 3 + i;
    }
};
