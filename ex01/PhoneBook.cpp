#include "PhoneBook.hpp"

void	printbook(std::string temp){
	std::cout << " | ";
	if(temp.size() > 10){
		temp.resize(9);
		std::cout << temp;
		std::cout << ".";
	}
	else
		std::cout << temp;
}

int	main(int argc, char **argv){

	PhoneBook	Directorio;
	std::string	instruction;
	int	idx;
	Directorio.num = 0;

	while(1)
	{
		system("clear");
		std::cout << "instruction - ADD, SEARCH, EXIT" << std::endl;
		std::cin >> instruction;
		if (instruction == "ADD"){
			system("clear");
			std::cout << "ADD New Contact" << std::endl;
			for (int i = Directorio.num - 1; i >= 0; i--){
				Directorio.Cons[i + 1] = Directorio.Cons[i];
			}
			std::cout << "first name of contact"
		}
	}
}