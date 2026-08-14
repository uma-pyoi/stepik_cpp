#include <iostream>

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }

protected:
    Foo(const char *msg) : msg(msg) {
    }

private:
    const char *msg;
};

struct FooDerived : public Foo {
    FooDerived(const char *msg) : Foo(msg) {
    };
};


void foo_says(const Foo &foo) { foo.say(); }


Foo get_foo(const char *msg) {
    const Foo fooALias = FooDerived(msg);
    return fooALias;
}

int main() {
    char msg[] = {"meow"};
    foo_says(get_foo(msg));


    return 0;
}
