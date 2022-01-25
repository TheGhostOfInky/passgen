#include <stdio.h>
#include <stdlib.h>
#include "sodium.h"

char gen() {
    int i = randombytes_uniform(62) + 0x30;
    if (i > 0x39) {
        i += 7;
    }
    if (i > 0x5A) {
        i += 6;
    }
    char c = i;
    return c;
}

int main(int argc, char* argv[]){
    char* c = "16";
    if (argv[1]) {
        c = argv[1];
    }
    int len = atoi(c);
    for (int i = 0; i < len; i++) {
        printf("%c", gen());
    }
}