#ifndef BIGNUM_H
#define BIGNUM_H
#include <vector>

class BigNum {

	public:
		BigNum(int bitlength);
		void generateRand();
		std::vector<short> getRand();

	private:
		std::vector<short> binary;

};
void formatNum(BigNum num);
#endif
