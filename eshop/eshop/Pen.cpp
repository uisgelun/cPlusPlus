#include "Pen.h"

//customizable default constructor

Pen::Pen()
{
	string name, description;
	double price;
	int id, stock;

	//we COULD declare the members of the Item class as protected so we can access them directly from the derived classes
	//without the need for extra set functions
	//have to think about it

	cout << "Input name of the pen product: ";
	cin.ignore();
	getline(cin, name);
	//cin >> name;
	setName(name);

	cout << "Input price of the pen: ";
	cin >> price;
	setPrice(price);

	cout << "Input description of the pen: ";
	cin.ignore();
	getline(cin, description);
	//cin >> description;
	setDescription(description);

	cout << "Input ID of the product: ";
	cin >> id;
	setId(id);

	cout << "Input available stock: ";
	cin >> stock;
	setStock(stock);

	cout << "Input color of the pen: ";
	cin >> m_color;

	cout << "Input tip size of the pen: ";
	cin >> m_tipSize;

}

//derived generator that uses the base class generator
Pen::Pen(string name = "", double price = 0, string description = "", int id=0, int stock=0, string color="red", double tipSize=0.0)
	:Item{ name, price, description, id, stock }
{
	m_color = color;
	m_tipSize = tipSize;
}

string Pen::getDetails() const
{
	ostringstream oss;
	oss << "Color: " << m_color << endl
		<< "Tip Size: " << m_tipSize << endl;
	
	return oss.str();
}