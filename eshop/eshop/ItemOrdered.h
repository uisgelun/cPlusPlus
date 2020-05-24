#ifndef ITEMORDERED_H
#define ITEMORDERED_H

#include "Item.h"
#include "Pen.h"
#include "Pencil.h"
#include "Paper.h"
#include "Notebook.h"
#include <string>
using namespace std;

class ItemOrdered
{
private:
    Item * m_item;
    int m_quantity;
public:
    ItemOrdered(Item*, int);
    ItemOrdered(Pen, int);
    ItemOrdered(Pencil, int);
    ItemOrdered(Notebook, int);
    ItemOrdered(Paper, int);
};

#endif