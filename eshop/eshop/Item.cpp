#include "Item.h"

/*
Item::Item()
{
	
	cout << "Input name of the product: ";
	cin >> m_name;

	cout << "Input price of the product: ";
	cin >> m_price;

	cout << "Input description of the product: ";
	cin >> m_description;

	cout << "Input ID of the product: ";
	cin >> m_id;

	cout << "Input stock: ";
	cin >> m_stock;
	

}*/

//generator
Item::Item(string name, double price, string description, int stock, int id)
{
	//need to be protected from incorrect input
	//exceptions?????
	m_name = name;
	m_price = price;
	m_description = description;
	m_id = id;
	m_stock = stock;
}

string Item::getBasicInfo() const
{
	//using a stream to put all the information we need to print
	//then we convert the stream into a string and return that string
	ostringstream oss;
	oss << m_name << endl
		<< "Price: " << m_price << "$" << endl
		<< "Description: " << m_description << endl
		<< "In stock: " << m_stock << " pcs" << endl
		<< "Item ID: " << m_id << endl;
		
	return oss.str();
}

string Item::getName() const
{
	return m_name;
}

void Item::setName(string name)
{
	m_name = name;
}

string Item::getDescription() const
{
	return m_description;
}

void Item::setDescription(string description)
{
	m_description = description;
}

double Item::getPrice() const
{
	return m_price;
}

void Item::setPrice(double price)
{
	m_price = price;
}

int Item::getId() const
{
	return m_id;
}

void Item::setId(int id)
{
	m_id = id;
}

int Item::getStock() const
{
	return m_stock;
}

void Item::setStock(int stock)
{
	m_stock = stock;

}

string Item::toString() const
{
	//is it really that simple?
	//no override????
	ostringstream oss;
	oss << getBasicInfo() << getDetails() <<"---------------------" << endl;
	return oss.str();
}

