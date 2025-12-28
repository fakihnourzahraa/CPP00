/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:28:04 by nour              #+#    #+#             */
/*   Updated: 2025/12/28 23:12:55 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "fstream"
#include "iomanip"
#include "cstdlib"

class Contact {
    private: 
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact();
    // ~Contact();
    void			set_fname(std::string str);
	void			set_lname(std::string str);
	void			set_nickname(std::string str);
	void			set_num(std::string str);
	void			set_secret(std::string str);
    std::string		get_fname();
    std::string		get_lname();
	std::string		get_nickname();
	std::string		get_num();
	std::string		get_secret();

};

class Phonebook{
    private:
    Contact contact[8];

    public:
    void add(int i);
    void search(void);
    void exit(void);
    // Phonebook();
    // ~Phonebook();
    // void    set_contacts();
    // void    get_contacts();
};

#endif