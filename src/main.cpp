#include <iostream>

#include <cstring> // strlen, strcpy

struct IntArray {
    explicit IntArray(size_t size) : size_(size), data_(new int[size]) {
        for (size_t i = 0; i != size; ++i) {
            data_[i] = 0;
        }
    }

    IntArray(IntArray const &a) : size_(a.size_), data_(new int[a.size_]) {
        for (size_t i = 0; i != a.size_; ++i) {
            data_[i] = a.data_[i];
        }
    }

    ~IntArray() {
        delete [] data_;
    }

    IntArray &operator=(IntArray const &a) {
        if (this != &a) {
            IntArray(a).swap(*this);
        }
        return *this;
    }

    void swap(IntArray &a) {
        std::swap(this->size_, a.size_);
        std::swap(this->data_, a.data_);
    }

    size_t size() const {
        return this->size_;
    }

    int get(size_t i) const {
        return this->data_[i];
    }

    int &get(size_t i) {
        return this->data_[i];
    }

    void resize(size_t newSize) {
        IntArray newIntArray(newSize);
        size_t validNewSize = newSize > this->size_ ? newSize : this->size_;
        for (size_t i = 0; i != validNewSize; ++i) {
            newIntArray.data_[i] = this->data_[i];
        }
        swap(newIntArray);
    }

    void print() const {
        for (size_t i = 0; i != this->size_; ++i) {
            std::cout << this->data_[i] << " ";
        }
        std::cout << '\n';
    }

private:
    size_t size_;
    int *data_;
};


int main() {
    IntArray intArray1(3);
    intArray1.get(1) = 2;
    std::cout << "1 arr: ";
    intArray1.print();
    intArray1.resize(5);
    std::cout << "1 arr after resize: ";
    intArray1.print();

    IntArray intArray2(2);
    intArray2.get(0) = 11;
    std::cout << "2 arr: ";
    intArray2.print();

    intArray1.swap(intArray2);
    std::cout << "!! after swap !! " << '\n' << "1 arr: ";
    intArray1.print();
    std::cout << "2 arr: ";
    intArray2.print();

    return 0;
}
