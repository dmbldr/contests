#include <iostream>
#include <cstdint>

int main()
{
    uint32_t t = 0;
    std::cin >> t;
    uint32_t a[t];
    uint32_t b[t];

    for(uint32_t i = 0; i < t; ++i)
    {
        std::cin >> a[i] >> b[i];
    }

    for(uint32_t i = 0; i < t; ++i)
    {
        std::cout << a[i] + b[i] << std::endl;
    }

    return 0;
}
