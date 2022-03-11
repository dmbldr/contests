/// Первое решение O(nlogn*n!)
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>> s;
        permutation(s, nums, 0);
        for(auto& el : s)
        {
            result.emplace_back(move(el));
        }
        return result;
    }
    
    void permutation(set<vector<int>>& result, vector<int>& nums, int i)
    {
        if(i == nums.size())
        {
            result.insert(nums);
            return;
        }
        
        for (int j = i; j < nums.size(); ++j)
        {
            swap(nums[j], nums[i]);
            permutation(result, nums, i + 1);
            swap(nums[j], nums[i]);
        }
    }
};
/// Есть решение за O(n*n!)
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        unordered_map<int, int> count;
        vector<int> el;
        el.reserve(nums.size());
        for(const auto& num : nums)
        {
            ++count[num];
        }
        permutation(result, nums, el, 0, count);
        return result;
    }
    
    void permutation(vector<vector<int>>& result, const vector<int>& nums, vector<int>& el, int i, unordered_map<int, int>& count)
    {
        if(i == nums.size())
        {
            result.push_back(el);
            return;
        }
        
        for (auto& c : count)
        {
            if(c.second == 0) continue;
            el.push_back(c.first);
            --c.second;
            permutation(result, nums, el, i + 1, count);
            el.pop_back();
            ++c.second;
        }
    }
};
