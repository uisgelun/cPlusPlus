#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include "Item.h"

class Notebook : public Item
{

public:
	
	Notebook();
	Notebook(string, double, string, int, int, int);

	virtual string getDetails() const;

private:
	int m_sections=665;

};

#endif