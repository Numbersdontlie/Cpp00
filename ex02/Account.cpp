/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:40:57 by luifer            #+#    #+#             */
/*   Updated: 2024/11/12 12:05:10 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>

//Init variables that are static inside the account class
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Getter functions for Account class
int Account::getNbAccounts(void){return (Account::_nbAccounts);}
int Account::getNbDeposits(void){return(Account::_totalNbDeposits);}
int Account::getTotalAmount(void){return (Account::_totalAmount);}
int Account::getNbWithdrawals(void){return (Account::_totalNbWithdrawals);}

//Constructor for Account class: we will instantiate and object from the class
//and initialize their attributes. Some will use the getters developed before
//and others will initialize to 0
Account::Account(int initial_deposit){
    Account::_accountIndex = Account::getNbAccounts();
    Account::_amount = initial_deposit;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_totalNbDeposits = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

//Destructor for Account class
Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex << ";amount" << Account::_amount << ";closed" << std::endl;
}

//Static Functions inside the class: Show info, Show status, Put money into account, get money from account, check amount of money in account, show timestamp
void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() <<  ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposits:" << deposit;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_nbDeposits++;
	std::cout << ";amount:" << Account::_amount << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
	if (Account::_amount > withdrawal){
		std::cout << ";withdrawal:" << withdrawal;
		Account::_totalAmount -=withdrawal;
		Account::_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << Account::_amount << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
		return (true);
	}
	else{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

//A function to retrieve the amount of money in the account
int	Account::checkAmount(void) const{
	return (Account::_amount);
}

//A function get the current date + time, format it to YYYYMMDD_HHMMSS and print it
void	Account::_displayTimestamp(void){
	std::time_t	currTime = time(&currTime);
	std::tm *timeInfo = localtime(&currTime);
	char buffer[20];
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeInfo);
	std::cout << std::string(buffer);
}