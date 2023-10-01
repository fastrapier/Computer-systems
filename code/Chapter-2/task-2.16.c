#include <stdio.h>

unsigned int_to_int(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                       /* optional */
    return (k % 2) + 10 * int_to_int(k / 2);
}

void work(int x) {

    int answer_1 = x << 3;

    int answer_2 = x >> 2;

    int answer_3 = x >> 3;

    printf("|0x%08X|%d|%d|0x%08X|%d|0x%08X|%d|0x%08X|\n", x, int_to_int(x), int_to_int(answer_1), answer_1, int_to_int(answer_2), answer_2, int_to_int(answer_3), answer_3);
}

int main() {
    int a = 0xC3;

    int b = 0x75;

    int c = 0x87;

    int d = 0x66;


    printf("|x||x<<3||x>>2||x>>>3|\n");
    printf("|-----------------|--------|--------|--------------------------|-----------------|--------|-----------------|\n");
    printf("|Шестнадцетиричное|Двоичное|Двоичное|Шестнадцетиричное|Двоичное|Шестнадцетиричное|Двоичное|Шестнадцетиричное|\n");
    work(a);
    work(b);
    work(c);
    work(d);

    return 1;
}