#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int* f1(int x, int step, int* size);


int f2(char* x, int step);


int main() {
    int size;
    int* r1_1 = f1(12345678, 16, &size);
    printf("12345678 = ");
    for (int i = size-1; i >= 0 ; i--) {
        printf("%d ", r1_1[i]);
    }
    printf("\n");
    free(r1_1);
    int* r1_2 = f1(1000000, 16, &size);
    printf("1000000 = ");
    for (int i = size-1; i >= 0 ; i--) {
        printf("%d ", r1_2[i]);
    }
    printf("\n");
    free(r1_2);
    int r2_1 = f2("12345678", 16);
    printf("12345678 = %d\n", r2_1);
    int r2_2 = f2("1000000", 16);
    printf("1000000 = %d\n", r2_2);
    return 0;
}


int* f1(int x, int step, int* size) {
    int* m = (int*)malloc(sizeof(int) * 100); 
    int index = 0;
    while (x > 0) {
        m[index++] = x % step;
        x /= step;
    }
    *size = index;
    return m;
}



int f2(char* x, int step) {
    int s = 0;
    int l = strlen(x);
    for (int i = l - 1; i >= 0; i--) {
        s += (x[i] - '0') * pow(step, l - 1 - i);
    }
    return s;
}