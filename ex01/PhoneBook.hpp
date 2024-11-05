#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

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