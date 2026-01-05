/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:19:16 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 15:32:11 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << std::endl;
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl;

	Fixed e(5.5f);
	Fixed f(10.5f);
	Fixed g(5.5f);

	std::cout << std::endl;

	std::cout << "e = " << e << ", f = " << f << ", g = " << g << std::endl;
	std::cout << "e > f: " << (e > f) << std::endl;
	std::cout << "e < f: " << (e < f) << std::endl;
	std::cout << "e >= g: " << (e >= g) << std::endl;
	std::cout << "e <= f: " << (e <= f) << std::endl;
	std::cout << "e == g: " << (e == g) << std::endl;
	std::cout << "e != f: " << (e != f) << std::endl;

	std::cout << std::endl;
	
	Fixed h(10);
	Fixed i(3);
	
	std::cout << std::endl;
	
	std::cout << "h = " << h << ", i = " << i << std::endl;
	std::cout << "h + i = " << (h + i) << std::endl;
	std::cout << "h - i = " << (h - i) << std::endl;
	std::cout << "h * i = " << (h * i) << std::endl;
	std::cout << "h / i = " << (h / i) << std::endl;

	std::cout << std::endl;
	
	Fixed j(-21);

	std::cout << std::endl;
	
	std::cout << "j initial: " << j << std::endl;
	std::cout << "++j: " << ++j << std::endl;
	std::cout << "j++: " << j++ << " after " << j << std::endl;
	std::cout << "--j: " << --j << std::endl;
	std::cout << "j--: " << j-- << " after " << j << std::endl;

	std::cout << std::endl;
	
	Fixed k(42.42f);
	Fixed l(21.21f);

	std::cout << std::endl;
	
	std::cout << "k = " << k << ", l = " << l << std::endl;
	std::cout << "min(k, l) = " << Fixed::min(k, l) << std::endl;
	std::cout << "max(k, l) = " << Fixed::max(k, l) << std::endl;

	std::cout << std::endl;
	
	Fixed const m(100.5f);
	Fixed const n(200.75f);

	std::cout << std::endl;
	
	std::cout << "m = " << m << ", n = " << n << std::endl;
	std::cout << "min(m, n) = " << Fixed::min(m, n) << std::endl;
	std::cout << "max(m, n) = " << Fixed::max(m, n) << std::endl;

	std::cout << std::endl;
	
	return (0);
}
