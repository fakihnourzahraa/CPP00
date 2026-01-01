/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:46 by nfakih            #+#    #+#             */
/*   Updated: 2026/01/01 13:01:08 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iostream"
# include "fstream"
# include "iomanip"
# include "cstdlib"

// void	replace_strings(std::string s1, std::string s2, std::string input, std::string new_name )
// {
// 	size_t 	i = 0;
// 	int 	s2_len = s2.length();
// 	int		s1_len = s1.length();

// 	std::ofstream file(new_name.c_str());
// 	while ((i == input.find(s1, i)) != std::string::npos)
// 	{
// 		int j = 0;
// 		while ((j + i))
// 		i+= s2.length();
// 	}
// }

void replace_strings(std::string s1, std::string s2, std::string input, std::string new_name)
{
    std::ofstream	file(new_name.c_str());
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
		return (1);

	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string	new_name = name + ".replace";

    std::ifstream infile(name.c_str());
    if (!infile.is_open())
	{
        std::cout<< "file is non existent or not readable" << std::endl;
		return (1);
	}
	infile.close();

	std::string line;
	std::string	input;
	while (std::getline(infile, line))
	{
		input += line;
		input += "\n";
	}
	replace_strings(s1, s2, input, new_name);
    return (0);
}
