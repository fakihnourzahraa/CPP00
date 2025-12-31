/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 20:52:27 by nour              #+#    #+#             */
/*   Updated: 2025/12/31 13:59:00 by nfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

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
