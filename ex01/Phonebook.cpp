#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : total(0)
{
}

Phonebook::~Phonebook()
{
}

void Phonebook::Add_contact()
{
    Contact newContact;

    if (newContact.SetAllInput())
    {
        contacts[total % 8] = newContact;

        if (total < 8)
            total++;

        std::cout << "Contact added!" << std::endl;
    }
    else
    {
        std::cout << "Failed to add contact. All fields must be filled." << std::endl;
    }
}

void Phonebook::Search_contact() const
{
    if (total == 0)
    {
        std::cout << "Phonebook empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < total; i++)
    {
        contacts[i].Print_all(i);
        std::cout << std::endl;
    }

    std::string input;
    std::cout << "Enter an index to display: ";
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    int index = input[0] - '0';
    if (index >= total)
    {
        std::cout << "No contact at this index." << std::endl;
        return;
    }

    contacts[index].Print_details();
}
