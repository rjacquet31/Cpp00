#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class Phonebook
{
private:
    Contact contacts[8];
    int     total;

public:
    Phonebook();
    ~Phonebook();

    void Add_contact();
    void Search_contact() const;
};

#endif
