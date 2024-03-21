/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:44:39 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/18 11:44:41 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
    this->count = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::add(void)
{

    this->contacts[this->count].addContact();
    if (this->count == 8)
        this->count = 0;
    else
        this->count++;
}

//  Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
void    PhoneBook::search(void)
{
    int index = 0;

    std::cout << ".----------.----------.----------.----------." << std::endl;
    std::cout << "|----index-|-----name-|--surname-|-nickname-|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
//  here line display per contact

    std::cout << "'----------'----------'----------'----------'" << std::endl;
    std::cout << "Input Index To Display: ";
    std::cin >> index;
    if (index > 8 || index < 0)
        std::cout << "Error Fetching Index." << std::endl;
    else
        this->contacts[index].displayInfo();
}