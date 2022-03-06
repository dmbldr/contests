#include <bits/stdc++.h>

int main()
{
    int L, K;
    std::cin >> L >> K;
    std::vector<int> blocks(K);

    L /= 2;
    int result = 0;
    for(int i = 0; i < blocks.size(); ++i)
    {
        std::cin >> blocks[i];
        if(blocks[i] == L) result = blocks[i];
    }
    if(result != 0)
    {
        std::cout << result;
        return 0;
    }
    L *= 2;

    int start = 0;
    int end = blocks.size() - 1;
    int ans[2]{};
    while(start < end)
    {
        auto sum = blocks[start] + blocks[end];
        if(sum == L)
        {
            ans[0] = blocks[start];
            ans[1] = blocks[end];
            ++start;
            --end;
        }
        if(sum < L) ++start;
        if(sum > L) --end;
    }

    std::cout << ans[0] << " " << ans[1];
}
