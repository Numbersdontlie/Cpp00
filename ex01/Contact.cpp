/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:38:34 by luifer            #+#    #+#             */
/*   Updated: 2024/11/06 16:28:02 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Setters for Objects
void    Contact::setFirstName(std::string firstName) {this->firstName = firstName;}
void    Contact::setLastName(std::string lastName) {this->lastName = lastName;}
void    Contact::setNickName(std::string nickName) {this->nickName = nickName;}
void    Contact::setPhoneNumber(std::string phone) {this->phone = phone;}
void    Contact::setSecret(std::string secret) {this->secret = secret;}

//Getters for objects
std::string Contact::getFirstName() {return (firstName);}
std::string Contact::getLastName() {return (lastName);}
std::string Contact::getNickName() {return (nickName);}
std::string Contact::getPhone() {return (phone);}
std::string Contact::getSecret() {return (secret);}

//Function to check if the contact is complete
bool Contact::isComplete(){
	return (!firstName.empty() && !lastName.empty() && !nickName.empty() &&
			!phone.empty() && !secret.empty());
}
 
 //Function to display the contact information
void	Contact::displayContactInfo(){
	std::cout << BLUE << "First name:" << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nick name: " << nickName << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Darkest secret: " << secret << RESET << std::endl;
}