/// Первое решение (с делением) time O(n) space O(1)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int product = 1, zeros = 0, iz = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0)
            {
                iz = i;
                ++zeros;
            }
            else
            {
                product *= nums[i];
            }
        }
        
        vector<int> result(nums.size());
        
        if(zeros > 1) return result;
        if(zeros == 1)
        {
            result[iz] = product;
            return result;
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            result[i] = product / nums[i];
        }
        
        return result;
    }
};
/// Второе решение (без деления) time O(n) space O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        prefix[0] = 1;
        suffix[nums.size() - 1] = 1;
        for(int i = 1; i < nums.size(); ++i)
        {
            prefix[i] = nums[i - 1] * prefix[i - 1];
        }
        for(int j = nums.size() - 2; j >= 0; --j)
        {
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }
        
        for(int i = 0; i < nums.size(); ++i)
        {
            nums[i] = prefix[i] * suffix[i];
        }
        
        return nums;
    }
};
/// третье решение time O(n) and space O(1) without result array
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int tmp = 1;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            result[i] = tmp;
            tmp *= nums[i];
        }
        tmp = 1;
        for(int j = nums.size() - 1; j >= 0; --j)
        {
            result[j] *= tmp;
            tmp *= nums[j];
        }
        
        return result;
    }
};
