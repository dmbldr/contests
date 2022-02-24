class Solution {
public:
    int minimumSum(int num) {
        int digits[4];

        for(size_t i = 0; i < 4; ++i)
        {
            digits[i] = num % 10;
            num /= 10;
        }

        sort(digits, digits + 4);

        int sum = (digits[0] + digits[1]) * 10 + digits[2] + digits[3];

        return sum;
    }
};