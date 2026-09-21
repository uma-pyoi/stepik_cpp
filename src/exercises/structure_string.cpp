#if 0
#include <iostream>

#include <cstring> // strlen, strcpy

struct String {
    String(const char *str = "") {
        size = std::strlen(str);
        this->str = new char[size + 1];
        std::strcpy(this->str, str);
    };

    String(size_t n, char c) {
        // make a string of char c duplicated n times
        size = n;
        str = new char[n + 1];
        for (int i = 0; i < size; ++i) {
            str[i] = c;
        }
        str[size] = '\0';
    }

    String(const String &other) {
        this->size = other.size;
        this->str = new char[other.size + 1];
        std::strcpy(this->str, other.str);
    }

    ~String() {
        delete [] str;
    }

    // assignment operator using swap
    // (creates a temp copy of passed str and swaps current str and the temp copy.
    // copy gets destroyed as the function exits)
    String &operator =(String const &other) {
        if (this != &other) {
            String other_cpy(other);
            other_cpy.swap(*this);
        }
        return *this;
    }

    // assignment operator bland
    // String &operator =(String const &other) {
    //     if (this != &other) {
    //         delete [] this->str;
    //
    //         this->size = other.size;
    //         this->str = new char[this->size + 1];
    //
    //         std::strcpy(this->str, other.str);
    //     }
    //     return *this;
    // }

    void swap(String &other) {
        std::swap(size, other.size);
        std::swap(str, other.str);
    }

    void append(String &other) {
        char *new_str = new char[size + 1 + other.size];
        std::strcpy(new_str, str);
        std::strcpy(new_str + size, other.str); // starts copying other.str at index of new_str + size ?
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
    String hello("hello my world!");
    std::cout << meow.str << '\n';
    std::cout << hello.str << '\n';
    meow = hello;
    std::cout << "========= after \"meow = hello;\" =========" << '\n';
    std::cout << "size: " << meow.size << " | " << hello.size << '\n';
    std::cout << meow.str << '\n';
    std::cout << hello.str << '\n';

    return 0;
}

#endif
