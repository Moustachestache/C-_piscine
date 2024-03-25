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
    this->isInit = 0;
}

Contact::~Contact(void)
{
    if (this->isInit != 0)
        std::cout << "Contact \"" << this->_fname << "\" deleted." << std::endl;
}

void    Contact::addField(std::string *target, std::string message)
{
    std::string input;

    for (input; input.empty(); getline(std::cin, input))
        std::cout << message;
    *target = input;
}


int	    Contact::getisInit(void)
{
    return (this->isInit);
}

void    Contact::addContact(void)
{
    std::cout << "Input Contact Information:" << std::endl;
    this->addField(&this->_fname, "First Name: ");
    this->addField(&this->_lname, "Last name: ");
    this->addField(&this->_nickname, "Nickname: ");
    this->addField(&this->_phone, "Phone: ");
    this->addField(&this->_secret, "Secret: ");
    this->isInit = 1;
    std::cout << this->_fname << " " << this->_lname << " added to contacts." << std::endl;
}

void    Contact::displayInfo(void)
{
    if (this->isInit == 0)
    {
        std::cout << "Ressource Unavailable." << std::endl;
        return;
    }
    std::cout << "name: " << this->_fname << std::endl;
    std::cout << "surname: " << this->_lname << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
    std::cout << "phone: " << this->_phone << std::endl;
    std::cout << "darkest secret: " << this->_secret << std::endl;
}

void    Contact::displayinfoInline(void)
{
    if (this->isInit == 0)
        return;
    std::string info[3] = {this->_fname, this->_lname, this->_nickname};
    for (int i = 0; i < 3; i++)
    {
        if (info[i].size() > 10)
        {
            info[i].resize(9, ' ');
            info[i].append(".");
        }
        else
            info[i].resize(10, ' ');
        std::cout << "|" << info[i];
    }
    std::cout << "|" << std::endl;
}