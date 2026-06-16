#include <iostream>

char *resize_custom(const char *str, unsigned size, unsigned new_size) {
    char *new_array = new char[new_size];

    for (int i = 0; i < new_size; ++i) {
        *(new_array + i) = *(str + i);
    }
    delete [] str;

    return new_array;
}

void print_array(char *array, unsigned size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(array + i) << ' ';
    }
    std::cout << '\n';
}

int main() {
    unsigned my_size{4};
    unsigned new_size{3};
    char *my_array = new char[my_size];


    std::cout << "my array: " << '\n';
    print_array(my_array, my_size);

    char *result_array = resize_custom(my_array, my_size, new_size);
    print_array(result_array, new_size);
}
