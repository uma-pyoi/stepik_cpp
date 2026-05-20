#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    double discriminant = (b * b) - (4 * a * c);
    if (discriminant >= 0.0)
    {
        double answer1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double answer2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << answer1 << ' ' << answer2 << '\n';
    }
    else
    {
        std::cout << "No real roots" << '\n';
    }

    return 0;
}
