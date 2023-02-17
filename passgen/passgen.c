#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>

char gen() {
	char i = randombytes_uniform(62) + '0';
	if (i > '9') {
		i += 7;
	}
	if (i > 'Z') {
		i += 6;
	}
	return i;
}

int main(int argc, char* argv[]) {
	int len = 16;
	if (argv[1]) {
		len = atoi(argv[1]);
	}
	if (len > (INT_MAX - 1) || len < 1) {
		exit(7);
	}
	char* arr;
	arr = malloc(len + 1);
	if (arr == NULL) {
		exit(22);
	}
	for (int i = 0; i < len; i++) {
		arr[i] = gen();
	}
	arr[len] = 0;
	puts(arr);
	free(arr);
	exit(0);
}