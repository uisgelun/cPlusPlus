#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "ItemOrdered.h"
#include "Item.h"
#include "Pen.h"
#include "Pencil.h"
#include "Paper.h"
#include "Notebook.h"
#include <string>
#include <list> 
#include "ItemOrdered.h"
using namespace std;

class ShoppingCart
{
protected:
    list <ItemOrdered> orderList;

public:
    void addItemOrdered(Pen, int);
    void removeItemOrdered(ItemOrdered itemOrdered);
    void changeItemOrderedQuantity(ItemOrdered itemOrdered, int quantity);
    void showCart();
    void clearCart();
    double calculateNet();
    double calculateCourierCost();
};

#endif
