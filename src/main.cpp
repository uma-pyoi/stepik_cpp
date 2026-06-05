#include <iostream>

void moveOne(int numArr[], unsigned size) {
    int * numArrPointer = numArr;
    int firstNum = numArr[0];

    for (int i = 0; i < (size - 1); ++i) {
        *(numArrPointer + i) = numArr[i + 1];
    }
    *(numArrPointer + size - 1) = firstNum;
}

void rotate(int a[], unsigned size, int shift)
{
    if (shift >= size) {
        shift = shift % size;
    }

    for (shift; shift > 0; --shift) {
        moveOne(a, size);
    }
}

int main() {
    int numArr[5] = {1, 2, 3, 4, 5};
    rotate(numArr, 5, 7);
    std::cout << "numArr:  ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numArr[i] << ' ';
    }

    return 0;
}




