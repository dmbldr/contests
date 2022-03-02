#include <iostream>
#include <cmath>

int main()
{
    int N, i, j;

    std::cin >> N >> i >> j;


    uint16_t first = abs(j - i) - 1;

    if(i > j) std::swap(i, j);

    uint16_t second = N - j + i - 1;

    std::cout << std::min(first, second);

    return 0;
}