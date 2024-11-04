#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
	std::string	First_name;
	std::string	Last_name;
	std::string	Nick_name;
	std::string	phone;
	std::string	secret;

	void	display(void){
		std::cout << First_name;
		std::cout << " : ";
		std::cout << phone << std::endl;
	}
};

class PhoneBook
{
	public:
	Contact Book[8];
	int		idx;
};

#endif