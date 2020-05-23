#include "Buyer.h"

void Buyer::awardBonus(int extraBonus) {
	Buyer::bonus += extraBonus;
	setBuyerCategory();
}
void Buyer::setBuyerCategory() {
	if (Buyer::bonus < 100)
		Buyer::buyerCategory = BRONZE;
	else if (bonus > 100 && bonus < 200)
		Buyer::buyerCategory = SILVER;
	else //(bonus > 200)
		Buyer::buyerCategory = GOLD;
}

Buyer::BuyerCategory Buyer::getBuyerCategory() const
{
	return buyerCategory;
}

//void Buyer::placeOrder(Item item, int quantity) {
//	shoppingCart.addItemOrdered(item, quantity)
//}

/*int Buyer::getBonus() { return Buyer::bonus; }
void Buyer::setBonus(int b) { Buyer::bonus = b;} */
