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

	cout << "Input available stock: ";
	cin >> stock;
	setStock(stock);

	cout << "Input ID of the product: ";
	cin >> id;
	setId(id);

	cout << "Input color of the pen: ";
	cin >> m_color;

	cout << "Input tip size of the pen: ";
	cin >> m_tipSize;

}

//derived generator that uses the base class generator
Pen::Pen(string name, double price, string description, int stock, int id, string color, double tipSize)
	:Item{ name, price, description, stock, id }
{
	m_color = color;
	m_tipSize = tipSize;
}

string Pen::getDetails() const
{
	
	ostringstream oss;
	oss << "Color: " << m_color << endl
		<< "Tip Size: "<< setprecision(2) << m_tipSize << "mm"<< endl;
	
	return oss.str();
	

	//den epeksergazetai swsta to double mesa sthn to_string
	//setprecision(2);
	//return ("\ncolour: " + m_color + "\nTip Size: " + to_string(m_tipSize) + "mm\n");

}