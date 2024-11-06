/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:20 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 16:27:53 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(){
	PhoneBook directorio;
	std::string cmd;
	int count = 0;
	int idx = 1;

	while(1){
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if(cmd == "ADD"){
			if (count >= 8){
				std::cout << RED << "Book is full! 1st contact will be overwritten" << RESET << std::endl;
			}
			idx = count % 8 + 1;
			directorio.addContact(idx - 1);
			count++;
		}
		else if (cmd == "SEARCH"){
			directorio.printAllContacts();
			std::cout << "Enter contact index to visualize the details: ";
			int idx;
			std::cin >> idx;
			std::cin.ignore();
			directorio.printOneContact(idx);
		}
		else if (cmd == "EXIT"){
			return 0;
		}
		else
			std::cout << RED << "Invalid command. Try again please.\n" << std::endl;
	}
	return (0);
}
