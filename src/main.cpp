#include <iostream>

void bar() {
    int c;
    std::cout << "c: " << c << '\n'; // on the second call in main c will be value of b
}

void foo() {
    int b = 67;
    bar();
}

int main()
{
    foo();
    bar();

    return 0;
}
