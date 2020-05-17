#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include "ItemOrdered.h"
#include "Item.h"
#include <string>
#include <list> 
#include "ItemOrdered.h"
using namespace std;

class ShoppingCart
{
protected:
    list <ItemOrdered> orderList;

public:
    void addItemOrdered(Item item, int quantity);
    void removeItemOrdered(ItemOrdered itemOrdered);
    void changeItemOrderedQuantity(ItemOrdered itemOrdered, int quantity);
    void showCart();
    void clearCart();
    double calculateNet();
    double calculateCourierCost();
};

#endif
