class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result(encoded.size() + 1);
        result[0] = first;

        for(size_t i = 0; i < encoded.size(); ++i)
        {
            result[i+1] = encoded[i] ^ result[i];
        }

        return result;
    }
};