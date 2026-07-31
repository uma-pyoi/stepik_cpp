#include <iostream>
// /*
// * Класс Cls определен точно таким образом:
// */
//
struct Cls {
    Cls(char c, double d, int i) : c(c), d(d), i(i) {
    };

private:
    char c;
    double d;
    int i;
};

//
//
// // Эта функция должна предоставить доступ к полю c объекта cls.
// // Обратите внимание, что возвращается ссылка на char, т. е.
// // доступ предоставляется на чтение и запись.
char &get_c(Cls &cls) {
    Cls clsCopy(cls);
    char blankChar{'p'};
    char *blankCharP = &blankChar;

    return (*(blankCharP + 1));
}


double &get_d(Cls &cls) {
    Cls clsCopy(cls);
    double blankDouble{1.1};
    double *blankDoubleP = &blankDouble;

    return *(blankDoubleP + 2);
}

int &get_i(Cls &cls) {
    Cls clsCopy(cls);
    int blankInt{0};
    int *blankIntP = &blankInt;

    return *(blankIntP + 5);
}

int main() {
    Cls cls('Z', 2.3, 34);

    char gottenChar = get_c(cls);
    std::cout << "gotten char: " << gottenChar << '\n';

    double gottenDouble = get_d(cls);
    std::cout << "gotten double: " << gottenDouble << '\n';

    int gottenInt = get_i(cls);
    std::cout << "gotten int: " << gottenInt << '\n';

    return 0;
}
