/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:17:11 by nfakih             #+#    #+#             */
/*   Updated: 2025/12/29 13:22:09 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
    int i;
    
	i = 1;
    if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		if (i > 1)
			std::cout <<" ";
		int j = 0;
		while (argv[i][j])
		{
			if (islower(argv[i][j]))
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
    return (0);
}
