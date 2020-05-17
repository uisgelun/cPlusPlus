#ifndef PEN_H
#define PEN_H

#include "Item.h"

class Pen : public Item
{
public:

	Pen();
	Pen(string, double, string, int, int, string, double);
	virtual string getDetails() const;

private:
	string m_color;
	double m_tipSize;

};

#endif