class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int max_w = INT_MIN;
        while(l < r)
        {
            int cur = (r - l) * min(height[l], height[r]);
            max_w = max(max_w, cur);
            if(height[l] < height[r]) ++l;
            else --r;
        }
        return max_w;
    }
};
