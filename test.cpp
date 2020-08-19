#include "bigNum.h"
#include <cstdlib>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
	int size = atoi(argv[1]);
	BigNum num(size);
	num.generateRand();
	formatNum(num);
	return 0;
}
