#include "ShoppingCart.h"

#include <iostream>
using namespace std;

void ShoppingCart::addItemOrdered(Pen pen, int quantity) {
	Item* item = &pen;
	ItemOrdered itemOrdered = ItemOrdered(item, quantity);
	orderList.push_back(itemOrdered);
}
//
//void ShoppingCart::removeItemOrdered(ItemOrdered itemOrdered) {
//
//}
void ShoppingCart::showCart() {

}