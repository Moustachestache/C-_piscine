/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:44:22 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/18 11:44:24 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
    std::cout << "Contact " << this->_fname << " deleted." << std::endl;
}

void    Contact::addContact(void)
{
    std::cout << "Creating Contact:" << std::endl << "First name: ";
    std::cin >> this->_fname;
    std::cout << std::endl << "Last name: ";
    std::cin >> this->_lname;
    std::cout << std::endl << "Nickname: ";
    std::cin >> this->_nickname;
    std::cout << std::endl << "Phone number: ";
    std::cin >> this->_phone;
    std::cout << std::endl << "Darkest Secret: ";
    std::cin >> this->_secret;
    std::cout << std::endl << "Contact Added." << std::endl;
}