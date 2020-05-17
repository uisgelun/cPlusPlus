#include "Pencil.h"

//we COULD declare the members of the Item class as protected so we can access them directly from the derived classes
	//without the need for extra set functions
	//have to think about it

//customizable default constructor

Pencil::Pencil()
{
	string name, description;
	double price;
	int id, stock;


	cout << "Input name of the pencil product: ";
	cin.ignore();
	getline(cin, name);
	//cin >> name;
	setName(name);

	cout << "Input price of the pencil: ";
	cin >> price;
	setPrice(price);

	cout << "Input description of the pencil: ";
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

	cout << "Input tip size of the pencil: ";
	cin >> m_tipSize;

	cout << "Input graphite scale of the pencil: ";
	cin >> m_type;

}


//derived generator
Pencil::Pencil(string name = "", double price = 0.0, string description = "", int id = 0, int stock = 0, double tipSize = 0.0, string type = "H")
	:Item{ name, price, description, id, stock }
{
	m_tipSize = tipSize;
	m_type = type;

}



string Pencil::getDetails() const
{
	//adding variable values to a string using a stream
	ostringstream oss;
	oss << "Tip Size: " << m_tipSize << "mm" << endl
		<< "Graphite Scale: " << m_type << endl;

	//then converting the stream to a string
	return oss.str();
}