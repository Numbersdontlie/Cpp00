#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;

    public:
    int idx;
    //Set and Get to access private attributes from outside the class
	void    setFirstName(std::string str) {firstName = str;}
    void    setLastName(std::string str) {lastName = str;}
    void    setNickName(std::string str) {nickName = str;}
    void    setPhoneNumber(std::string str) {phone = str;}
    void    setSecret(std::string str) {secret = str;}

    std::string getFirstName() {return (firstName);}
    std::string getLastName() {return (lastName);}
    std::string getNickName() {return (nickName);}
    std::string getPhone() {return (phone);}
    std::string getSecret() {return (secret);}

    bool isComplete(){
	return (!firstName.empty() && !lastName.empty() && !nickName.empty() &&
			!phone.empty() && !secret.empty());
    }
};

#endif