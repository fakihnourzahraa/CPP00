/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/03 14:16:33 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
    return (0);
}
