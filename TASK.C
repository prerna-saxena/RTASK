#include <stdio.h>

void concatenateLists(int list1[][3], int list2[][3], int rows, int concatenated[][6]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            concatenated[i][j * 2] = list1[i][j];
            concatenated[i][j * 2 + 1] = list2[i][j];
        }
    }
}

void printMatrix(int matrix[][6], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("[");
        for (int j = 0; j < 6; j++) {
            printf("%d", matrix[i][j]);
            if (j < 5) printf(",");
        }
        printf("]\n");
    }
}

int main() {
    // Example 1
    int list1_1[2][3] = {{1, 1, 1}, {1, 1, 1}};
    int list2_1[2][3] = {{0, 0, 0}, {0, 0, 0}};
    int concatenated_1[2][6];

    concatenateLists(list1_1, list2_1, 2, concatenated_1);
    printf("Example 1:\n");
    printMatrix(concatenated_1, 2);

    // Example 2
    int list1_2[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int list2_2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int concatenated_2[3][6];

    concatenateLists(list1_2, list2_2, 3, concatenated_2);
    printf("Example 2:\n");
    printMatrix(concatenated_2, 3);

    // Example 3
    int list1_3[4][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int list2_3[4][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int concatenated_3[4][6];

    concatenateLists(list1_3, list2_3, 4, concatenated_3);
    printf("Example 3:\n");
    printMatrix(concatenated_3, 4);

    return 0;
}
