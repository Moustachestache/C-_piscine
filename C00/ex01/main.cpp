/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:59:07 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/17 13:33:07 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	Contact	Data[8];
	std::string	input;

	if (argc > 1)
		return (1);
	while (input != "EXIT")
	{
		std::cin >> input;
		if (input == "ADD")
			ft_add(&Data);
		else if (input == "SEARCH")
			ft_search(&Data);
		else
			std::cout << "Error: Invalid command \"" + input + "\"" + std::endl;
			std::cout << "Usage: ADD, SEARCH, EXIT." + std::endl;
	}
}
