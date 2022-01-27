#include <stdio.h>
#include <stdlib.h>
#include "sodium.h"

char gen() {
    unsigned char i = randombytes_uniform(62) + 0x30;
    if (i > 0x39) {
        i += 7;
    }
    if (i > 0x5A) {
        i += 6;
    }
    return i;
}

int main(int argc, char* argv[]){
    int len = 16;
    if (argv[1]) {
        len = atoi(argv[1]);
    }
    for (int i = 0; i < len; i++) {
        printf("%c", gen());
    }
}