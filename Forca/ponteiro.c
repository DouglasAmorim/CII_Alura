#include <stdio.h>

void calcula(int* c) {
	(*c)++;
	printf("%d\n", *c);
}

int main() {
	int c = 10;
	calcula(&c);
}