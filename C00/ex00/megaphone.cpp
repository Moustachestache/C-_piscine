/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 08:38:22 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/17 09:57:08 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_uppercase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		{
			str[i] = toupper(str[i]);
		}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);	
	}
	for (int i = 1; i < argc; i++)
	{
		ft_uppercase(argv[i]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
}
