#include <bits/stdc++.h>

int main()
{
    std::vector<uint32_t> nums;

    uint32_t tmp = 0;
    uint32_t max_num = 0;

    while(true)
    {
        std::cin >> tmp;
        if(tmp == 0) break;
        nums.push_back(tmp);
        max_num = std::max(tmp, max_num);
    }

    for(const auto& num : nums)
    {
        if(num == max_num)
        {
            ++tmp;
        }
    }

    std::cout << tmp;
}