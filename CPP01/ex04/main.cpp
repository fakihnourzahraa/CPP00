/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/05 11:55:02 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

void replace_strings(std::string s1, std::string s2, std::string input, std::string new_name)
{
    std::ofstream	file(new_name.c_str());
    if (!file)
    {
        std::cout << "Access required for " << new_name <<std::endl;
        return;
    }
    std::string 	result = "";
    size_t 			pos = 0;
    size_t 			found = 0;

    while ((found = input.find(s1, pos)) != std::string::npos) {
        result += input.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += input.substr(pos);
    file << result;
    file.close();
}
int main(int argc, char **argv)
{
    if (argc != 4)
	{
		std::cout << "Enter 1 file name and 2 strings please" << std::endl;
		return (1);
	}
	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string	new_name = name + ".replace";

    std::ifstream infile(name.c_str());
    if (!infile.is_open())
	{
        std::cout<< "file " << name << " is non existent or not readable" << std::endl;
		return (1);
	}

	std::string line;
	std::string	input;
	while (std::getline(infile, line))
	{
		input += line;
		input += "\n";
	}
	infile.close();
	replace_strings(s1, s2, input, new_name);
    return (0);
}
