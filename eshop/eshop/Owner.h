#ifndef OWNER_H
#define OWNER_H
#include "User.h"

class Owner : public User
{
private:
	bool isAdmin = true;
};
#endif