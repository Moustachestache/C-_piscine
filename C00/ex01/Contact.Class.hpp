/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:00:57 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/17 13:11:01 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:
		Contact(void);
		~Contact(void);
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
};

#endif
