#if 0

#include <iostream>

void print_2d_matrix(int **m, unsigned rows, unsigned cols) {
    std::cout << "printing... :3" << '\n';
    for (int p = 0; p < rows; ++p) {
        for (int d = 0; d < cols; ++d) {
            std::cout << m[p][d] << ' ';
        }
        std::cout << '\n';
    }
}

// swap the row with the smallest int with the first row
void swap_min(int *m[], unsigned rows, unsigned cols) {
    int smallest{m[0][0]};
    int row_of_smallest{};
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] < smallest) {
                smallest = m[i][j];
                row_of_smallest = i;
            }
        }
    }

    int *row_of_smallest_ptr = m[row_of_smallest];
    m[row_of_smallest] = m[0];
    m[0] = row_of_smallest_ptr;
}

// transpose: the matrix's cols become the rows and vice versa
// (m[3][5] becomes m[5][3])
int **transpose(const int *const *m, unsigned rows, unsigned cols) {
    int **trans_m = new int *[cols];
    trans_m[0] = new int[rows * cols];
    for (int i = 1; i != cols; ++i) {
        trans_m[i] = trans_m[i - 1] + rows;
    }

    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            trans_m[i][j] = m[j][i];
        }
    }

    return trans_m;
}


int main() {
    // whatever matrix
    constexpr unsigned rows{3};
    constexpr unsigned cols{4};
    int data[rows][cols] = {
        {9, 10, 11, 12},
        {5, 6, 7, 8},
        {1, 2, 3, 4},
    };
    int *m[rows];
    for (int i = 0; i < rows; ++i)
        m[i] = data[i];

    // swap
    std::cout << "====== swapping ======" << '\n';
    print_2d_matrix(m, rows, cols);
    swap_min(m, rows, cols);
    print_2d_matrix(m, rows, cols);


    // transpose
    std::cout << "====== transposing ======" << '\n';
    print_2d_matrix(m, rows, cols);
    int **new_m = transpose(m, rows, cols);
    print_2d_matrix(new_m, cols, rows);
    delete[] new_m[0];
    delete[] new_m;

    return 0;
}

#endif
