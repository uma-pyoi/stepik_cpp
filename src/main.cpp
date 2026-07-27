#include <iostream>

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
    /* Реализуйте этот конструктор */
    String(const char *str = "") {
        size = std::strlen(str);
        this->str = new char[size + 1];
        std::strcpy(this->str, str);
    };

    String(size_t n, char c) {
        size = n;
        str = new char[n + 1];
        for (int i = 0; i < size; ++i) {
            str[i] = c;
        }
        str[size + 1] = '\0';
    }

    ~String() {
        delete [] str;
    }

    void append(String &other) {
        char *new_str = new char[size + other.size + 1];
        std::strcpy(new_str, str);
        std::strcpy(new_str + size, other.str);
        size += other.size;
        delete [] str;
        str = new_str;
    }

    void print() {
        std::cout << "size: " << size << '\n';
        std::cout << "str: " << str << '\n';
    }

    std::size_t size;
    char *str;
};

int main() {
    String meow(3, 'm');
    meow.print();

    String hello(", hello");
    hello.print();

    std::cout << "--------------" << '\n';
    meow.append(hello);
    meow.print();
    std::cout << "--------------" << '\n';

    String world("World");
    world.append(world);
    world.print();
    return 0;
}
