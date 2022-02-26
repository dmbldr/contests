class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        for(int i = 0, j = s.size() - 1; i < j; ++i, --j)
        {
            swap(s[i], s[j]);
        }
    }
};
