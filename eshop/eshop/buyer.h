#ifndef BUYER_H
#define BUYER_H
#include "User.h"

class Buyer : public User
{
private:

	int bonus; //= 0;


	//should be enum class, enum classes - enumerator names are local to the enum
	//and their values do not implicitly convert to other types (like another enum or int)
	//Plain enums - where enumerator names are in the same scope as the enum and their values
	//implicitly convert to integers and other types

	enum BuyerCategory { BRONZE=0, SILVER=1, GOLD=2 };
	BuyerCategory buyerCategory = BuyerCategory::BRONZE;
	//ShoppingCart shoppingCart = new ShoppingCart();

public:
	void awardBonus(int extraBonus);
	void setBuyerCategory();

	BuyerCategory getBuyerCategory() const;

	//void placeOrder(Item item, int quantity);
	int getBonus() const { return bonus; }
	void setBonus(int b) { bonus = b; }
};
#endif