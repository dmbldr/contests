class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set;
        for(const auto& jewel : jewels)
        {
            set.insert(jewel);
        }

        int res = 0;
        for(const auto& stone : stones)
        {
            if(set.find(stone) != set.end())
            {
                ++res;
            }
        }

        return res;
    }
};
