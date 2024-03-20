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
		std::string	_fname;
		std::string	_lname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif