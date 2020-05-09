#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
private:
	string name;
	double price;
	string description;
	int stock;
	int id;
public:
	string getBasicInfo();
	string getDetails();
	void toString();
	void setStock(int st);
	string getName() { return name; }
	double getPrice() { return price; }
	string getDescription() { return description; }
	int getStock() { return stock; }
	int getId() { return id; }
};
#endif