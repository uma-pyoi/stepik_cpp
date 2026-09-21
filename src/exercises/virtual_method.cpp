#if 0
#include <iostream>
#include <string_view>

class Cat {
public:
    Cat(int const age) { this->age = age; }

    void virtual meow() const {
        std::cout << "MEOW <- " << this->getAge() << " year old big cat" << '\n';
    };

    int getAge() const {
        return this->age;
    }

private:
    int age{};
};

class TinyCat : public Cat {
public:
    TinyCat(int const age, std::string_view type) : Cat(age) {
        this->type = type;
    }

    void virtual meow() const {
        std::cout << "meow <- " << this->getType() << '\n';
    }

    std::string_view getType() const {
        return this->type;
    }

private:
    std::string_view type{"tiny tuxedo cat"};
};

int main() {
    Cat cat{30};
    TinyCat tinyCat{12, "Mr. Penis"};

    Cat &tcatReference{tinyCat};
    Cat *tcatPointer{&tinyCat};

    std::cout << "+++ cats meowing +++" << "\n\n";
    std::cout << "++regular cat: " << '\n';
    cat.meow();

    // the virtual method meow() here will be able to call TinyCat::getType() successfully because
    // meow is virtual, so at compile time C++ knows to use TinyCat::meow() instead, inside of which
    // 'this' is TinyCat* (a pointer to TinyCat), so it can call TinyCat::getType()
    std::cout << "++cat reference to tiny cat: " << '\n';
    tcatReference.meow();

    // just like the reference example, this will successfully call TinyCat::getType() from the virtual meow
    std::cout << "++cat pointer to tiny cat address: " << '\n';
    tcatPointer->meow();


    return 0;
}

#endif
