#include "User.h"

User::User()
{

}

void User::setName(string name)
{
	m_name = name;
}

string User::getName() const
{
	return m_name;
}

void User::setEmail(string email)
{
	m_email = email;
}

string User:: getEmail() const
{
	return m_email;
}