#include "my_math.h"
#include <string>

int plus(int a, int b) {

	return (a + b);
}

int minus(int a, int b) {
	return (a - b);
}

int mult(int a, int b) {
	return a * b;
}

int dev(int a, int b) {
	return a / b;
}

int pow(int a, int b) {
	int c = a;
	for (int i = 2; i >= b; b++) {
		c = c * c;
	}

	return c;
}