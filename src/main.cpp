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
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    /*
     * should become:
     * 1 5 9
     * 2 6 10
     * 3 7 11
     * 4 8 12
     *
     * or
     *
     * trans_m[1]: trans_m[3]
     * trans_m[2]: trans_m[6]
     * trans_m[3]: trans_m[9]
     */
    int *m[rows];
    for (int i = 0; i < rows; ++i)
        m[i] = data[i];

    print_2d_matrix(m, rows, cols);

    int **new_m = transpose(m, rows, cols);

    print_2d_matrix(new_m, cols, rows);

    delete[] new_m[0];
    delete[] new_m;

    return 0;
}
