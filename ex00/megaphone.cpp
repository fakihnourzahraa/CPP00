/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:17:11 by nour              #+#    #+#             */
/*   Updated: 2025/12/28 18:22:43 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fstream"

int main() {
    int count;
    
    count = 0;
    std::ifstream infile("count.txt");
    if (infile.is_open()) {
        infile >> count;
        infile.close();
    }
    if (count >= 3)
    {
        count = 0;
    }
    count++;
    std::ofstream outfile("count.txt");
    if (outfile.is_open()) {
        outfile << count;
        outfile.close();
    }
    if (count == 1)
    {
        std::cout << "\"shhhhh... I think the students are asleep...\"" << std::endl;
        std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP... " <<std::endl;
    }
    if (count == 2)
    {
        std::cout << "Damnit \" ! \" \"Sorry students, I thought this thing was off.\"" << std::endl;
        std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." <<std::endl;
    }
    if (count == 3)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}
