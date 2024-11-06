/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:40:57 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 23:48:40 by luifer           ###   ########.fr       */
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
int Account::getNbAccounts(void){
    return (Account::_nbAccounts);
}

int Account::getNbDeposits(void){
    return(Account::_totalNbDeposits);
}

int Account::getTotalAmount(void){
    return (Account::_totalAmount);
}

int Account::getNbWithdrawals(void){
    return (Account::_totalNbWithdrawals)
}

//Constructor for Account class

//Destructor for Account class

//Static Functions inside the class: Show info, Show status, Put money into account, get money from account, check amount of money in account, show timestamp