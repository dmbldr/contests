#include <iostream>
#include <cstdint>

int main()
{
    uint32_t n = 0;
    std::cin >> n;

    uint32_t sum = 0;
    for(size_t i = 0; i < n; ++i)
    {
        uint32_t w;
        uint32_t u;
        std::cin >> w >> u;

        sum += u;
    }

    std::cout << sum;

    return 0;
}
