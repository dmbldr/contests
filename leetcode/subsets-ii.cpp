/// Первое решение на основе unordered_set с своим расчётом хэша для вектора.
/// Тогда insert в множество O(n) (подсчёт хэша вектора), сортировка O(n*logn) и 2^n вставок. Итоговая асимптотика O(n*2^n) 
struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};

class Solution {
public:
  
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        unordered_set<vector<int>, VectorHash> s;
        vector<int> element;
        element.reserve(nums.size());
        search_set(s, nums, element, 0);
        
        for(auto& el : s)
        {
            result.emplace_back(move(el));
        }
        
        return result;
    }
    
    void search_set(unordered_set<vector<int>, VectorHash>& result, const vector<int>& nums, vector<int>& element, int i)
    {
        if(i == nums.size())
        {
            result.insert(element);
            return;
        }
        
        search_set(result, nums, element, i + 1);
        element.push_back(nums[i]);
        search_set(result, nums, element, i + 1);
        element.pop_back();
    }
};
/// Второе решение O(logn * 2^n) (вставка в std::set в среднем O(logn))
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        set<vector<int>> s;
        vector<int> element;
        element.reserve(nums.size());
        search_set(s, nums, element, 0);
        
        for(auto& el : s)
        {
            result.emplace_back(move(el));
        }
        
        return result;
    }
    
    void search_set(set<vector<int>>& result, const vector<int>& nums, vector<int>& element, int i)
    {
        if(i == nums.size())
        {
            result.insert(element);
            return;
        }
        
        search_set(result, nums, element, i + 1);
        element.push_back(nums[i]);
        search_set(result, nums, element, i + 1);
        element.pop_back();
    }
};
