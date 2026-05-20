#include <iostream>

int raise2ToPower(int x)
{
    int result = 1;
    for (int i = 0; i < x; ++i)
    {
        result *= 2;
    }
    return result;
}

int main()
{
    int numOfTests{0};
    std::cin >> numOfTests;

    for (int i = 0; i < numOfTests; ++i)
    {
        int a{0};
        std::cin >> a;

        int biggestPower{0}; // in case when a = 1, so 2 to the power of 0 is 1

        while (true)
        {
            int result = raise2ToPower(biggestPower);
            if (result <= a)
            {
                biggestPower++;
            }
            else
            {
                biggestPower--;
                break;
            }
        }
        std::cout << biggestPower << '\n';
    }

    return 0;
}
