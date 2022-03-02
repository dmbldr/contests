#include <bits/stdc++.h>

int main()
{
    int tmp;
    int min_val = 11;
    int max_val = 0;
    std::vector<int> markets;
    std::vector<int> houses;
    for(int i = 0; i < 10; ++i)
    {
        std::cin >> tmp;
        if(tmp == 2) markets.push_back(i);
        if(tmp == 1) houses.push_back(i);
    }

    for(const auto& house : houses)
    {
        for(const auto& market : markets)
        {
            min_val = std::min(std::abs(market - house), min_val);
        }
        max_val = std::max(min_val, max_val);
        min_val = 11;
    }

    std::cout << max_val;
}