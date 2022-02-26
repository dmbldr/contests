class Solution {
public:
    int climbStairs(int n) {
        if(n < 4)
        {
            return n;
        }

        int result = 0;
        int tmp[2];
        tmp[0] = 2;
        tmp[1] = 3;

        for(size_t i = 4; i <= n; ++i)
        {
            tmp[i % 2] += tmp[(i+1) % 2];
        }

        return tmp[n % 2];
    }
};
