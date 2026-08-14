// the challenge was to write get_foo in such a way, that it returns an instance of Foo
// with the initialised msg field. Solved by creating FooDerived class

#if 0

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
    const Foo fooCopy = FooDerived(msg);
    return fooCopy;
}

int main() {
    char msg[] = {"meow"};
    foo_says(get_foo(msg));


    return 0;
}

#endif
