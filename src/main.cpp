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


int main() {
    // whatever matrix
    constexpr unsigned rows{3};
    constexpr unsigned cols{4};
    int data[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int *m[rows];
    for (int i = 0; i < rows; ++i)
        m[i] = data[i];

    print_2d_matrix(m, rows, cols);


    return 0;
}
