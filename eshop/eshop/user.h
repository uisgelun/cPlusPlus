#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

using namespace std;

class User
{
public:
    User();

    void setName(string);
    string getName() const;

    void setEmail(string);
    string getEmail() const;

private:
    string m_name;
    string m_email;
};

#endif
