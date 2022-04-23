class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int result = 0;
        int prod = 1;
        int left = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            prod *= nums[i];
            while(prod >= k) prod /= nums[left++];
            result += i - left + 1;
        }
        
        return result;
    }
};
