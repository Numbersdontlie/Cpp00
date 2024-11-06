#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

#define BLUE "\e[1;94m"
#define RESET "\033[0m"

class PhoneBook
{
	private:
	Contact contactos[8];
	int	currIdx;
	int	total;

	public:
	PhoneBook();
	void	printBook(std::string temp);
	std::string	truncate(std::string& str);
	void	printContacts() const;
	void	printContactInfo(int idx);
	void	addContact();
};

#endif