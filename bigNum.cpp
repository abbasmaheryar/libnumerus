#include "bigNum.h"
#include <iostream>
#include <cstdlib>
#include <vector>
BigNum::BigNum(int bitlength) {
	binary.resize(bitlength);
}
void BigNum::generateRand() {
	srand(time(0));
	int i;
	for (i = 0; i<binary.size(); i++) {
		binary[i] = rand() % 2;
	}
}
std::vector<short> BigNum::getRand() {
	return binary;
}

void formatNum(BigNum num) {
	int i;
	std::vector<short> randArr = num.getRand();
	int size = randArr.size();
	for (i = 0; i<size; ++i) {
		std::cout<<randArr[i];
	}
	std::cout<<"\n";
}
