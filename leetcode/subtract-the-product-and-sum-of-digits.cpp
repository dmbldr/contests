class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        do
        {
            int digit = n % 10;
            n /= 10;

            prod *= digit;
            sum += digit;
        } while(n != 0);

        return prod - sum;
    }
};

