/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:08 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 14:26:17 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//Function to print only the first 10 characters of a string
std::string	truncate(std::string& str){
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

//Function to print all the contacts on the PhoneBook
void	PhoneBook::printAllContacts()
{
	std::cout << "   MY AWESOME PHONEBOOK\n";
	std::cout << std::setw(10) << "INDEX" << "|"
			  << std::setw(10) << "FIRST NAME" << "|"
			  << std::setw(10) << "LAST NAME" << "|"
			  << std::setw(10) << "NICK NAME" << "\n";
	std::cout << "------------------------------------------\n";

	for (int i = 0; i < 8; i++){
		if (contactos[i].getFirstName().empty())
			break;
		std::cout << BLUE << std::setw(10) << std::right << i + 1 << "|"
		std::cout << std::setw(10) << std::right << truncate(contactos[i].getFirstName()) << "|"
		std::cout << std::setw(10) << std::right << truncate(contactos[i].getLastName()) << "|"
		std::cout << std::setw(10) << std::right << truncate(contactos[i].getNickName()) << RESET << "\n";
	}
}

//Function to print the information of a specific contact
void	printOneContact(int idx){
	contactos[idx].displayContactInfo();
}

//Function to add a new contact. It will check 
void	addContact(int idx){
	Contact	nuevo;
	std::string input;

	//Include if statement to check when the book is full and need to delete the 1st

	do{
		std::cout << "Enter first name: ";
		std::getline(std::cin, input);
		nuevo.setFirstName(input);
	} while(input.empty());
	do{
		std::cout << "Enter last name: ";
		std::getline(std::cin, input);
		nuevo.setLastName(input);
	} while(input.empty());
	do{
		std::cout << "Enter nick name: ";
		std::getline(std::cin, input);
		nuevo.setNickName(input);
	} while (input.empty());
	do{
		std::cout << "enter phone number: ";
		std::getline(std::cin, input);
		nuevo.setPhoneNumber(input);
	} while (input.empty());
	do{
		std::cout << "Enter secret: ";
		std::getline(std::cin, input);
		nuevo.setSecret(input);
	} while(input.empty());

	if (nuevo.isComplete()){
		contactos[idx] = nuevo;
	}
}
