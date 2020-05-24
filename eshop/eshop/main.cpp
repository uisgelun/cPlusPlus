#include "ItemOrdered.h"
#include "Item.h"
#include "Pen.h"
#include "Pencil.h"
#include "Paper.h"
#include "Notebook.h"
#include <string>
#include "ItemOrdered.h"
#include "ShoppingCart.h"

using namespace std;
int main() {

	Pen pen1("Bic Pen", 1.2, "Your everyday pen for general use.", 745, 25, "Blue", 0.12);

	ShoppingCart shoppingCart;
	shoppingCart.addItemOrdered(pen1, 4);
}