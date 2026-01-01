/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:19:16 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/01 17:05:41 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    std::cout << "=== CONSTRUCTORS TEST ===" << std::endl;
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    
    std::cout << "\n=== OUTPUT TEST ===" << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "\n=== COMPARISON OPERATORS TEST ===" << std::endl;
    Fixed e(5.5f);
    Fixed f(10.5f);
    Fixed g(5.5f);
    
    std::cout << "e = " << e << ", f = " << f << ", g = " << g << std::endl;
    std::cout << "e > f: " << (e > f) << " (should be 0)" << std::endl;
    std::cout << "e < f: " << (e < f) << " (should be 1)" << std::endl;
    std::cout << "e >= g: " << (e >= g) << " (should be 1)" << std::endl;
    std::cout << "e <= f: " << (e <= f) << " (should be 1)" << std::endl;
    std::cout << "e == g: " << (e == g) << " (should be 1)" << std::endl;
    std::cout << "e != f: " << (e != f) << " (should be 1)" << std::endl;
    
    std::cout << "\n=== ARITHMETIC OPERATORS TEST ===" << std::endl;
    Fixed h(10);
    Fixed i(3);
    
    std::cout << "h = " << h << ", i = " << i << std::endl;
    std::cout << "h + i = " << (h + i) << std::endl;
    std::cout << "h - i = " << (h - i) << std::endl;
    std::cout << "h * i = " << (h * i) << std::endl;
    std::cout << "h / i = " << (h / i) << std::endl;
    
    std::cout << "\n=== INCREMENT/DECREMENT TEST ===" << std::endl;
    Fixed j;
    std::cout << "j initial: " << j << std::endl;
    std::cout << "++j: " << ++j << std::endl;
    std::cout << "j after ++: " << j << std::endl;
    std::cout << "j++: " << j++ << std::endl;
    std::cout << "j after j++: " << j << std::endl;
    std::cout << "--j: " << --j << std::endl;
    std::cout << "j after --: " << j << std::endl;
    std::cout << "j--: " << j-- << std::endl;
    std::cout << "j after j--: " << j << std::endl;
    
    std::cout << "\n=== MIN/MAX TEST ===" << std::endl;
    Fixed k(42.42f);
    Fixed l(21.21f);
    
    std::cout << "k = " << k << ", l = " << l << std::endl;
    std::cout << "min(k, l) = " << Fixed::min(k, l) << std::endl;
    std::cout << "max(k, l) = " << Fixed::max(k, l) << std::endl;
    
    std::cout << "\n=== MIN/MAX CONST TEST ===" << std::endl;
    Fixed const m(100.5f);
    Fixed const n(200.75f);
    
    std::cout << "m = " << m << ", n = " << n << std::endl;
    std::cout << "min(m, n) = " << Fixed::min(m, n) << std::endl;
    std::cout << "max(m, n) = " << Fixed::max(m, n) << std::endl;
    
    std::cout << "\n=== SUBJECT TEST ===" << std::endl;
    Fixed subj_a;
    Fixed const subj_b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << subj_a << std::endl;
    std::cout << ++subj_a << std::endl;
    std::cout << subj_a << std::endl;
    std::cout << subj_a++ << std::endl;
    std::cout << subj_a << std::endl;
    
    std::cout << subj_b << std::endl;
    
    std::cout << Fixed::max( subj_a, subj_b ) << std::endl;
    
    std::cout << "\n=== EDGE CASES TEST ===" << std::endl;
    Fixed zero(0);
    Fixed negative(-5.5f);
    Fixed positive(5.5f);
    
    std::cout << "zero = " << zero << std::endl;
    std::cout << "negative = " << negative << std::endl;
    std::cout << "positive = " << positive << std::endl;
    std::cout << "negative < zero: " << (negative < zero) << std::endl;
    std::cout << "positive > zero: " << (positive > zero) << std::endl;
    std::cout << "negative + positive: " << (negative + positive) << std::endl;
    std::cout << "positive * negative: " << (positive * negative) << std::endl;
    
    return 0;
}
