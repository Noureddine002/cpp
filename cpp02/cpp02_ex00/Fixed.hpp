#ifndef _FIXED_HPP
#define _FIXED_HPP
#include <iostream>

class Fixed {
private:
    int n_fix;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const Fixed & fix);
    Fixed &operator = (Fixed const &fix);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif