#include <iostream>
#include <cstdint>

int main()
{
    int64_t a = 0, b = 0;
    std::cin >> a >> b;

    int64_t sum = (a + b) * (b - a + 1) / 2;

    std::cout << sum;

    return 0;
}