#include <stdio.h>

void inplace_swap(int *x, int *y) {
    printf("------------------------------\n");
    printf("Initial data: x = %d, y = %d\n", *x, *y);
    
    *y = *x ^ *y;
    printf("Step 1 y = %d x = %d\n", *y, *x);
    
    *x = *x ^ *y;
    printf("Step 2 y = %d x = %d\n", *y, *x);

    *y = *x ^ *y;
    printf("Step 3 y = %d x = %d\n", *y, *x);

    printf("Result data: x = %d, y = %d\n", *x, *y);

    printf("------------------------------\n");
}

void test_inplace_swap() {
    int x = 1;
    int y = 2;
    inplace_swap(&x, &y);
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--) {
        printf("Before: first - %d, last - %d\n", first, last);
        if(first == last) continue;
        inplace_swap(&a[first], &a[last]);
        printf("After: first - %d, last - %d\n", first, last);
    }
}

void print_array(int a[], size_t length) {

    for(int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void test_reverse_array() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    size_t length = sizeof(a) / sizeof(a[0]);

    print_array(a, length);

    reverse_array(a, length);

    print_array(a, length);
}

int main() {
    // test_inplace_swap();
    test_reverse_array();
    return 0;
}