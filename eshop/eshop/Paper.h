#ifndef PAPER_H
#define PAPER_H

#include "Item.h"

class Paper : public Item
{
public:

	Paper();
	Paper(string, double, string, int, int, int, int);
	virtual string getDetails() const;

private:
	int m_weight;
	int m_pages;
};


#endif
