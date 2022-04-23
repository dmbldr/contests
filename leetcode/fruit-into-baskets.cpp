class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m;
        int ans = 0, l = 0;
        
        for(int i = 0; i < fruits.size(); ++i)
        {
            ++m[fruits[i]];
            if(m.size() <= 2)
            {
                int s = 0;
                for(const auto& el : m) s += el.second;
                ans = max(ans, s);
            }
            else
            {
                --m[fruits[l]];
                if(m[fruits[l]] == 0) m.erase(fruits[l]);
                ++l;
            }
        }
        return ans;
    }
};
