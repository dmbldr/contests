class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result(queries.size());
        for(size_t i = 0; i < queries.size(); ++i)
        {
            for(const auto& point : points)
            {
                auto is_in = less_or_equal(get_dist(point[0], point[1], queries[i][0], queries[i][1]), queries[i][2]);
                if(is_in) ++result[i];
            }
        }

        return result;
    }

    double get_dist(int x1, int y1, int x2, int y2)
    {
        return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    }

    bool less_or_equal(double x, int y)
    {
        if(x < y) return true;
        if(fabs(x - y) < 1e-7) return true;
        return false;
    }
};