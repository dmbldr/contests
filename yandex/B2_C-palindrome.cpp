#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;

    if(s.size() <= 1)
    {
        std::cout << 0;
        return 0;
    }

    int payment = 0;
    for(int i = 0; i < s.size() / 2; ++i)
    {
        if(s[i] != s[s.size() - i - 1])
        {
            ++payment;
        }
    }

    std::cout << payment;

    return 0;
}