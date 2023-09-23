#include <stdio.h>

void test() {
    int x = 0x87654321;
   
    int y = 0xFF;

    int answer = x & y;

    printf("Answer: 0x%X\n", answer);

    printf("Answer 2: 0x%X\n", ~0);
}

void test_1(int x) {

    int result = x & 0xFF;

    printf("Answer: 0x%08X\n", result);
}

void test_2(int x) {
    int result = x ^ ~0xFF;

    printf("Answer: 0x%08X\n", result);
}

void test_3(int x) {
    int result = x | 0xFF;

    printf("Answer: 0x%08X\n", result);
}

int main() {
    int x = 0x87654321;

    // test();
    // printf("______________\n");
    test_1(x);
    test_2(x);
    test_3(x);
    return 0;
}