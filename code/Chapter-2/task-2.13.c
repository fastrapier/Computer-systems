#include <stdio.h>

int bis(int x, int m) {
    return x | m;
}
int bic(int x, int m) {
    return x ^ m;
}

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x));
    return result;
}

int main() {
    int x = 0x12345678;
    int y = 0x87654321;

    int bool_or_answer = bool_or(x, y);
    int bool_xor_answer = bool_xor(x, y);

    printf("bool_or_answer: 0x%08X\n", bool_or_answer);
    printf("bool_xor_answer: 0x%08X\n", bool_xor_answer);
}