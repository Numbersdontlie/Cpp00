#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(){
	PhoneBook directorio;
	std::string str;

	while(1){
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, str);

		if(str == "ADD"){
			directorio.addContact();
		}
		else if (str == "SEARCH"){
			directorio.printContacts(directorio);
			std::cout << "Enter contact index to visualize the details: ";
			int idx;
			std::cin >> idx;
			std::cin.ignore();
			directorio.printContactInfo(idx);
		}
		else if (str == "EXIT"){
			break;
		}
		else
			std::cout << "Invalid command. Try again please.\n";
	}
	return (0);
}
