#include <cstdlib>
#include <vector>
#include <iostream>
#include "bigNum.h"

int main(int argc, char* argv[]) {
	if (argc == 1 || argc > 2) {
		std::cout << "Please enter the bit-length for the random number you want to generate!" << std::endl;
		exit(EXIT_FAILURE);
	}
	int size = atoi(argv[1]);
	BigNum num(size);
	num.generateRand();
	formatNum(num);
	return 0;
}
