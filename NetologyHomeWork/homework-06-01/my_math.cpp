#pragma once
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
	if (b == 0) {
		return 1;
	}
	else
	{
		int c = a;
		for (int i = 1; i < b; i++) {
			c = c * a;
		}
		return c;
	}

}