/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:38:48 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 12:06:13 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

#define BLUE "\e[1;94m"
#define RESET "\033[0m"

class Contact
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;

	public:
		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickName(std::string);
		void setPhoneNumber(std::string);
		void setSecret(std::string);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getSecret();

		bool isComplete();
		void displayContactInfo();
};

#endif