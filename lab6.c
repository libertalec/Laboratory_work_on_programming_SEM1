#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("First task: \n");
    double mas[5] = {56.4, 36.5,7.7,44.3};
    for (int i = 0; i < 4; i++) {
        printf("%f\n", *(mas + i));
    }

    printf("\nSecond task: \n");
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

