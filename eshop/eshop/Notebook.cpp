#include "Notebook.h"

//we COULD declare the members of the Item class as protected so we can access them directly from the derived classes
//without the need for extra set functions
//have to think about it

//customizable default constructor
//design choice for better visibility of the item being created
//to print customised messages that include the type of the item that is being created
//instead of having a construcotr from Item get generalized data
//just printing the name of the item being created in the message
//????maybe not??????

Notebook::Notebook()
{
	string name, description;
	double price;
	int id, stock;


	cout << "Input name of the notebook product: ";
	cin.ignore();
	getline(cin, name);
	setName(name);

	cout << "Input price of the notebook: ";
	cin >> price;
	setPrice(price);

	cout << "Input description of the notebook: ";
	cin.ignore();
	getline(cin, description);
	
	setDescription(description);

	cout << "Input available stock: ";
	cin >> stock;
	setStock(stock);

	cout << "Input ID of the product: ";
	cin >> id;
	setId(id);

	cout << "Input number of notebook sections: ";
	cin >> m_sections;
}


//derived generator
Notebook::Notebook(string name, double price, string description, int stock, int id, int sections)
	:Item{ name, price, description, stock, id }
{
	m_sections = sections;

}


string Notebook::getDetails() const
{
	//adding variable values to a string using a stream
	//ostringstream vs stringstream???
	//one for output only and the other for input output????
	ostringstream oss;
	oss << "Number of sections: " << m_sections << endl;

	//then converting the stream to a string
	return oss.str();

}
