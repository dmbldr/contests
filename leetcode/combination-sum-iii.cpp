class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
            vector<vector<int>> result;
        vector<int> comb;
        combination(result, comb, 1, k, n);
        return result;
    }
    
    void combination(vector<vector<int>>& result, vector<int>& comb, int val, int k, int target)
    {
        if(k == comb.size())
        {
            if(target == 0) result.push_back(comb);
            return;
        }
        if(val > 9) return;
        if(target < 0) return;
        
        combination(result, comb, val + 1, k, target);
        comb.push_back(val);
        combination(result, comb, val + 1, k, target - val);
        comb.pop_back();
    }
};
