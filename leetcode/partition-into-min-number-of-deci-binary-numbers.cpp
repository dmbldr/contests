class Solution {
public:
    int minPartitions(string n) {
        int max_num = 0;
        for(const auto& c : n)
        {
            max_num = max(max_num, c - 48);
            if(max_num == 9) break;
        }

        return max_num;
    }
};
