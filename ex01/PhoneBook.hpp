#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class PhoneBook
{
	private:
	Contact contactos[8];
	int	currIdx;
	int	total;

	public:
	std::string	truncate(const std::string& str) const;
	void	printAllContacts();
	void	printOneContact(int idx);
	void	addContact(int idx);
};

#endif