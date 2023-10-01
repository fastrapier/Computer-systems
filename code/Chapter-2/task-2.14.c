#include <stdio.h>

int main() {

    int x = 0x66;

    int y = 0x39;

    int answer_1 = x & y;

    int answer_2 = x | y;

    int answer_3 = ~x | ~y;

    int answer_4 = x & !y;

    int answer_5 = x && y;

    int answer_6 = x || y;

    int answer_7 = !x || !y;

    int answer_8 = x && ~y;


    printf("x & y = 0x%X x && y = 0x%X\n", answer_1, answer_5);
    printf("x | y = 0x%X x || y = 0x%X\n", answer_2, answer_6);
    printf("~x | ~y = 0x%X !x || !y = 0x%X\n", answer_3, answer_7);
    printf("x & !y = 0x%X x && ~y = 0x%X\n", answer_4, answer_8);

    int test = x == y;

    printf("x == y = %X\n", test);

    return 1;
}