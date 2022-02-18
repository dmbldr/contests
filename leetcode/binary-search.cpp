class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
        {
            return -1;
        }
        return binary_rec(nums, target, 0, nums.size());
    }
    
    int binary_rec(vector<int>& nums, int target, int left, int right)
    {
        int mid = (right + left) / 2;


        if(left >= right)
        {
            return -1;
        }
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
            return binary_rec(nums, target, left, mid);
        }
        else
        {
            return binary_rec(nums, target, mid + 1, right);
        }
    }
};
