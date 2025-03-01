#include "BigInteger.hxx"

BigInteger::BigInteger (void) noexcept {
    this->arr = new char[2] {'0', '\0'};
    this->size = 1;
}

BigInteger::BigInteger (long long num) noexcept {
    bool isNegative = false;
    
    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    this->size = (num == 0) ? 1 : (log10(num) / 10) + 1;
    if (isNegative) ++this->size;

    this->arr = new char [this->size + 1];

    unsigned int i = 0;

    do {
        this->arr[i++] = (char)(num % 10 + '0');
        num /= 10;
    } while (num > 0);

    if (isNegative) this->arr[i++] = '-';

    this->arr[i] = '\0';

    std::cout << this->arr << std::endl;
    for (unsigned int j = 0; j < i / 2; ++j) {
        char temp = this->arr[i - j - 1];
        this->arr[i - j - 1] = this->arr[j];
        this->arr[j] = temp;
    }
    std::cout << this->arr << std::endl;
}

BigInteger::BigInteger (const char* num) noexcept {
    
}
BigInteger::BigInteger (const BigInteger& unit) noexcept {

}
BigInteger& BigInteger::operator= (const BigInteger& unit) noexcept {
    return *this;
}