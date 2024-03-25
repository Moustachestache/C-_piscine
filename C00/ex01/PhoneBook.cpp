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
    std::cout << std::endl << "counter: " << this->count << std::endl;
    this->contacts[this->count].addContact();
    if (this->count == 7)
        this->count = 0;
    else
        this->count++;
}

//  Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
void    PhoneBook::search(void)
{
    int index = 0;
    std::string input;

    std::cout << ".----------.----------.----------.----------." << std::endl;
    std::cout << "|----index-|-----name-|--surname-|-nickname-|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].getisInit() != 0)
        {
            std::cout << "|        " << i << " ";
            contacts[i].displayinfoInline();
        }
    }
    std::cout << "'----------'----------'----------'----------'" << std::endl;
    std::cout << "Input Index To Display: ";
    std::getline(std::cin, input);
    index = input[0] - 48;
    if (index > 8 || index < 0)
        std::cout << "Error Fetching Index." << std::endl;
    else
        this->contacts[index].displayInfo();
}