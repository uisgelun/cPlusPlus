#ifndef PENCIL_H
#define PENCIL_H

#include "Item.h"

class Pencil : public Item
{
public:

	Pencil();
	Pencil(string, double, string, int, int, double, string);

	virtual string getDetails() const;

private:
	double m_tipSize;
	string m_type;
	//{
	//	H,
	//	B,
	//	HB
	//};
};

#endif
