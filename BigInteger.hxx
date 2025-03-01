#ifndef BIGINTEGER_CXX
#define BIGINTEGER_CXX

#include <cmath>
#include <iostream>

class BigInteger {
private:
    char* arr;
    unsigned int size;
public:
    BigInteger (void) noexcept;
    BigInteger (long long num) noexcept;
    BigInteger (const char* num) noexcept;
    BigInteger (const BigInteger& unit) noexcept;
    BigInteger& operator= (const BigInteger& unit) noexcept;
};

#endif // BIGINTEGER_CXX