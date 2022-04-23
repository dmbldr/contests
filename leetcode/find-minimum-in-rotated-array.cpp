class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        if(nums.size() == 1 || nums[left] < nums[right]) return nums[0];
        
        while(left < right)
        {
            int mid = (left + right) / 2;
            
            if(nums[mid] > nums[mid + 1])
            {
                return nums[mid + 1];
            }
            if(nums[mid - 1] > nums[mid])
            {
                return nums[mid];
            }
            
            if(nums[mid] < nums[left])
            {
                right = mid;
            }
            else
                left = mid + 1;
        }
        return -1;
    }
};
