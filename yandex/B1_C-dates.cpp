#include <iostream>

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    if(x == y)
    {
        std::cout << 1;
        return 0;
    }
    if(x <= 12 && y <= 12)
    {
        std::cout << 0;
        return 0;
    }
    std::cout << 1;
    return 0;
}

/* В данной задаче я не понимаю почему, если x == y, то тогда дату можно однозначно определить...
 * Например, на вход поступила строка 2 2 2003. Почему в данном случае мы можем однозначно определить дату....
 */