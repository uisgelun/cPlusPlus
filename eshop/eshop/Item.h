#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Item
{
public:

	Item();
	Item(string, double, string, int, int);

	string getBasicInfo() const;

	string getName() const;
	void setName(string);

	string getDescription() const;
	void setDescription(string);
	
	double getPrice() const;
	void setPrice(double);
	
	int getId() const;
	void setId(int);
	
	int getStock() const;
	void setStock(int );

	
	//PURE virtual => implementation on subclasses => abstract class
	virtual string getDetails() const = 0; 


	string toString() const; //override??

	

private:

	string m_name;
	double m_price;
	string m_description;
	int m_stock;
	int m_id;

};
#endif