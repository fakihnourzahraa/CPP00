/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 11:29:35 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(void)
{
	Harl harl;
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("a");
    return (0);
}
