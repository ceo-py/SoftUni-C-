#include <iostream>

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        if (i % 3 == 0)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
