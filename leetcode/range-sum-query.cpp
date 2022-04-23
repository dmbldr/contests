class NumArray {
public:
    vector<int> prefix_sum;
    NumArray(vector<int>& nums) : prefix_sum(move(nums)) {
        for(int i = 1; i < prefix_sum.size(); ++i)
        {
            prefix_sum[i] += prefix_sum[i - 1];
        }
    }
    
    int sumRange(int left, int right) {
        int temp = (left == 0) ? 0 : prefix_sum[left - 1];
        return prefix_sum[right] - temp;
    }
};
