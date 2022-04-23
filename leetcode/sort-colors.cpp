class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]{};
        for(int i = 0; i < nums.size(); ++i)
        {
            ++count[nums[i]];
        }
        int i = 0;
        while(count[0]--) nums[i++] = 0;
        while(count[1]--) nums[i++] = 1;
        while(count[2]--) nums[i++] = 2;
    }
};
