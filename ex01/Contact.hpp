#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string number;
    std::string secret;

    void SetInput(const std::string& prompt, std::string& field);

public:
    Contact();
    ~Contact();

    bool SetAllInput();
    void Print_all(int index) const;
    void Print_details() const;
};

#endif
