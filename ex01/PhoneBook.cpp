#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : currIdx(0), total(0){}

std::string	truncate(std::string& str){
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::printContacts() const
{
	std::cout << "   MY AWESOME PHONEBOOK\n";
	std::cout << std::setw(10) << "INDEX" << "|"
			  << std::setw(10) << "FIRST NAME" << "|"
			  << std::setw(10) << "LAST NAME" << "|"
			  << std::setw(10) << "NICK NAME" << "\n";
	std::cout << "------------------------------------------\n";

	for (int i = 0; i < total; i++){
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncate(Book[i].getFirstName()) << "|"
				  << std::setw(10) << truncate(Book[i].getLastName()) << "|"
				  << std::setw(10) << truncate(Book[i].getNickName()) << "\n";
	}
}

void	printContactInfo(int idx){
	if (idx < 0 || idx >= total){
		std::cout << "Invalid index. Try another\n";
		return;
	}
	const Contact& contacto = contacto[i];
	std::cout << "First Name: " << contacto.getFirstName() << "\n";
	std::cout << "Last Name: " << contacto.getLastName() << "\n";
	std::cout << "Nick Name: " << contacto.getNickName() << "\n";
	std::cout << "Phone number: " << contacto.getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << contacto.getSecret() << "\n";
}

void	addContact(){
	Contact	nuevo;
	std::string input;

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
		contactos[currIdx] = nuevo;
		currIdx = (currIdx + 1) % 8;
		if (total < 8)
			total++;
		std::cout << "Contact saved. \n";
	}
}
