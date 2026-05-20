#include <iostream>

int main()
{
    char c = '\0';
    bool seenSpace{false};
    while (std::cin.get(c))
    {
        if (c == ' ')
        {
            if (!seenSpace)
            {
                seenSpace = true;
                std::cout << c;
            }
        }
        else
        {
            std::cout << c;
            seenSpace = false;
        }
    }

    return 0;
}
