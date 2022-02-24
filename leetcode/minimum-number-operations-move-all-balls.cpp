class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result(boxes.size());

        vector<int> not_empty;

        for(size_t i = 0; i < boxes.size(); ++i)
        {
            if(boxes[i] == '1')
            {
                not_empty.push_back(i);
            }
        }

        for(size_t i = 0; i < result.size(); ++i)
        {
            for(size_t j = 0; j < not_empty.size(); ++j)
            {
                result[i] += abs((long)(not_empty[j] - i));
            }
        }

        return result;
    }
};