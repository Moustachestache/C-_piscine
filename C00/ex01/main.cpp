/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:59:07 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/19 16:01:42 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	input;

	if (argc > 1)
		return (1);
	while (input != "EXIT")
	{
		std::cin >> input;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "Error: Invalid command \"" + input + "\"" + std::endl;
			std::cout << "Usage: ADD, SEARCH, EXIT." + std::endl;
	}
}
