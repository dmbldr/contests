#include <iostream>
#include <cstdint>

uint64_t gdc(uint64_t a, uint64_t b)
{
    if(a < b)
    {
        std::swap(a, b);
    }

    while(a % b != 0)
    {
        a %= b;
        std::swap(a, b);
    }

    return b;
}


int main()
{
    uint64_t n = 0;
    std::cin >> n;

    auto k = gdc(n, n + 1) - 1;

    if(k == 0)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << 100;
    }

    return 0;
}

