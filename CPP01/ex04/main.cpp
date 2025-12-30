/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2025/12/30 19:11:44 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

int main(int argc, char **argv)
{
    if (argc != 4)
		return (1);

	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
    
    std::ifstream infile(name);
    if (!infile.is_open())
	{
        std::cout<< "file is non existent or not readable" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(infile, line))
	{
		int pos = 0;
		while (1)
		{
			int a = line.find(s1, pos);
			if (a == -1 || a == std::string::npos || a == (line.length() - 1) )
			{
				pos = a;
				break;
			}
			
		}
	}
	
    return 0;
}
