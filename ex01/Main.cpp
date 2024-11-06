/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:20 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 14:29:36 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(){
	PhoneBook directorio;
	std::string cmd;

	while(1){
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, cmd);

		if(cmd == "ADD"){
			directorio.addContact();
		}
		else if (cmd == "SEARCH"){
			//directorio.printContacts(directorio);
			std::cout << "Enter contact index to visualize the details: ";
			int idx;
			std::cin >> idx;
			std::cin.ignore();
			directorio.printOneContact(idx);
		}
		else if (cmd == "EXIT"){
			break;
		}
		else
			std::cout << "Invalid command. Try again please.\n";
	}
	return (0);
}
