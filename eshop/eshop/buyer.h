#ifndef BUYER_H
#define BUYER_H
#include "user.h"

class Buyer : public User
{
private:
	int bonus; //= 0;
	enum BuyerCategory { BRONZE, SILVER, GOLD };
	BuyerCategory buyerCategory = BRONZE;
	//ShoppingCart shoppingCart = new ShoppingCart();

public:
	void awardBonus(int extraBonus);
	void setBuyerCategory();
	//void placeOrder(Item item, int quantity);
	int getBonus() { return bonus; }
	void setBonus(int b) { bonus = b; }
};
#endif