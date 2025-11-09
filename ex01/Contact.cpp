#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::SetInput(const std::string& prompt, std::string& field)
{
    std::string Input;

    do {
        std::cout << prompt;
        std::getline(std::cin, Input);
    } while (Input.empty() && !std::cin.eof());

    field = Input;
}

bool Contact::SetAllInput()
{
    SetInput("First Name : ", first_name);
    SetInput("Last Name : ", last_name);
    SetInput("Nick Name : ", nick_name);
    SetInput("Number : ", number);
    SetInput("Darkest Secret : ", secret);

    return (!first_name.empty()
        && !last_name.empty()
        && !nick_name.empty()
        && !number.empty()
        && !secret.empty());
}

void Contact::Print_all(int index) const
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name) << "|";
    std::cout << std::setw(10) << (last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name) << "|";
    std::cout << std::setw(10) << (nick_name.length() > 10 ? nick_name.substr(0, 9) + "." : nick_name);
}

void Contact::Print_details() const
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nick_name << std::endl;
    std::cout << "Phone number: " << number << std::endl;
    std::cout << "Darkest secret: " << secret << std::endl;
}
