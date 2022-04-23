class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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
        
        for(int j = i; j < candidates.size(); ++j)
        {
            if(j > i && candidates[j] == candidates[j - 1]) continue;
            
            if(target - candidates[j] < 0) break;
            
            comb.push_back(candidates[j]);
            combination(result, comb, j + 1, candidates, target - candidates[j]);
            comb.pop_back();
        }
    }
};
