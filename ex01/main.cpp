#include <iostream>
#include "Phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (std::cin.eof())
            break;

        if (command == "ADD")
            phonebook.Add_contact();
        else if (command == "SEARCH")
            phonebook.Search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Unknown command." << std::endl;
    }

    return 0;
}
