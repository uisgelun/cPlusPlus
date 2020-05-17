#include "ShoppingCart.h"

#include <iostream>
using namespace std;

void ShoppingCart::addItemOrdered(Item item, int quantity) {
	ItemOrdered itemOrdered = ItemOrdered(item, quantity);
	orderList.push_back(itemOrdered);
}

void ShoppingCart::removeItemOrdered(ItemOrdered itemOrdered) {

}