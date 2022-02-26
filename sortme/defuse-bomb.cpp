#include <iostream>
#include <cstdint>

int main()
{
    uint32_t n = 0, k = 0;
    std::cin >> n >> k;
    int32_t a[n];

    for(size_t i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    for(size_t i = 0; i < n; ++i)
    {
        if(a[i] >= k) continue;
    }

    return 0;
}