#pragma once
#include <string>

class Counter {
private:
	int num;

public:
	Counter(std::string answer);
void plus();
void minus();
void equal();
void set();
};