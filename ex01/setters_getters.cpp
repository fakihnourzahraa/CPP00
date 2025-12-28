/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters_getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nour <nour@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/28 22:18:13 by nour             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::set_fname(std::string str)
{
    first_name = str;
}
void Contact::set_lname(std::string str)
{
    last_name = str;
}
void Contact::set_nickname(std::string str)
{
    nickname = str;
}
void Contact::set_num(std::string str)
{
    phone_number = str;
}
void Contact::set_secret(std::string str)
{
    darkest_secret = str;
}
std::string Contact::get_fname()
{
    return (first_name);
}
std::string Contact::get_lname()
{
    return (last_name);
}
std::string Contact::get_nickname()
{
    return (nickname);
}
std::string Contact::get_num()
{
    return (phone_number);
}
std::string Contact::get_secret()
{
    return (darkest_secret);
}
