#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Task 1: \n");
    double mas[4];
    int* mas1 = mas;
    mas1[0] = 56.4;
    mas1[1] = 36.5;
    mas1[2] = 7.7;
    mas1[3] = 44.3;

    for (int i = 0; i < 4; i++) {
        printf("%f\n", *(mas1 + i));
    }

    printf("\nTask 2: \n");
    double *arr = (double *) malloc(4 * sizeof(double));
    arr[0] = 56.4;
    arr[1] = 36.5;
    arr[2] = 7.7;
    arr[3] = 44.3;
    for (int i = 0; i < 4; i++) {
        printf("%f\n", *(arr + i));
    }
    free(arr);
    return 0;
}

