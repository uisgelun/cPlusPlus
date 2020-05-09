#ifndef OWNER_H
#define OWNER_H
#include "user.h"

class Owner : public User
{
private:
	bool isAdmin = true;
};
#endif