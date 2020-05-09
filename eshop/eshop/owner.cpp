#include "user.h"
#include <iostream>
using namespace std;

class Owner : public User {
  private:
    bool isAdmin = true;
};
