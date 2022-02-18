class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        vector<int> result(nums.size());
        int i = high;
        
        while(low <= high)
        {
            if(abs(nums[low]) > abs(nums[high]))
            {
                result[i--] = pow(nums[low], 2);
                ++low;
            }else
            {
                result[i--] = pow(nums[high], 2);
                --high;
            }
        }
        return result; 
    }
};
