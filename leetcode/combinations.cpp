class Solution {
public:
    void combination(int val, int n, int k, vector<int>& comb, vector<vector<int>>& result) {
        if(k == comb.size()) {
            result.push_back(comb);
            return;
        }

        if(val > n){
            return;
        }

        combination(val + 1, n, k, comb, result);
        comb.push_back(val);
        combination(val + 1, n, k, comb, result);
        comb.pop_back();
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> comb;
        combination(1, n, k, comb, result);
        return result;
    }
};
