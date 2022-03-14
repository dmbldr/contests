class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> comb;
        combination(result, comb, 0, candidates, target);
        return result;
    }
    
    void combination(vector<vector<int>>& result, vector<int>& comb, int i, const vector<int>& candidates, int target)
    {
        if(target == 0)
        {
            result.push_back(comb);
            return;
        }
        if(target < 0) return;
        if(i == candidates.size()) return;
        
        combination(result, comb, i + 1, candidates, target);
        comb.push_back(candidates[i]);
        combination(result, comb, i, candidates, target - candidates[i]);
        comb.pop_back();
    }
};
