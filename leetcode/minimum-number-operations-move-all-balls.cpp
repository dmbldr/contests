class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result(boxes.size());

        int sum = 0;
        int right = 0, left = 0;
        for(size_t i = 0; i < boxes.size(); ++i)
        {
            if(boxes[i] == '1')
            {
                sum += i;
                ++right;
            }
        }

        for(size_t i = 0; i < boxes.size(); ++i)
        {
            result[i] = sum;
            if(boxes[i] == '1')
            {
                --right;
                ++left;
            }
            sum += left - right;
        }

        return result;
    }
};