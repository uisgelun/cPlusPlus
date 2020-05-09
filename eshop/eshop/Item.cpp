#include "Item.h"
#include <iostream>
#include <string>
using namespace std;

string Item::getBasicInfo() {
	string info = "Information about " + Item::getName() + "\nPrice: " + to_string(Item::getPrice()) + "\nDescription: " + Item::getDescription() + "\nStock: " + to_string(Item::getStock()) + "\nId: " + to_string(Item::getId());
	return info;
}

void Item::toString() {
	cout << Item::getBasicInfo();
	cout << Item::getDetails();
}

string Item::getDetails() {
	return "will be overriden";
}