class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> element;
        element.reserve(nums.size());
        search_set(result, nums, element, 0);
        return result;
    }
    
    void search_set(vector<vector<int>>& result, const vector<int>& nums, vector<int>& element, int i)
    {
        if(i == nums.size())
        {
            result.push_back(element);
            return;
        }
        
        search_set(result, nums, element, i + 1);
        element.push_back(nums[i]);
        search_set(result, nums, element, i + 1);
        element.pop_back();
    }
};
