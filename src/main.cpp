#include <iostream>

class Cat {
    int age{};
    mutable int counter{}; // can be changed in const methods

public:
    const Cat *getCatP() const {
        return this;
    }

    void print() {
        std::cout << "non-const age: " << this->age << " counter: " << this->counter << '\n';
    }

    void print() const {
        std::cout << "const age: " << this->age << " counter: " << this->counter << '\n';
    }

    void changeAge(int newAge) {
        this->age = newAge;
    }

    void incrementCounter() const {
        this->counter++;
    }
};

int main() {
    Cat newCat;
    const Cat *catP{newCat.getCatP()};
    catP->print();
    newCat.changeAge(12);
    catP->incrementCounter();
    catP->print();
    newCat.print();

    return 0;
}
