#define _GNU_SOURCE
#include <stdio.h>

int rand() {
    static int i = 0;
    int numbers[] = {9, 8, 10, 24, 75, 9};

    return numbers[i++ % 6];
}