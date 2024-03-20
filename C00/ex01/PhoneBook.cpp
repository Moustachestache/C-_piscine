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


void    PhoneBook::search(void)
{
}

void    PhoneBook::getIndex(void)
{
}