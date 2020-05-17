#include "Notebook.h"

//we COULD declare the members of the Item class as protected so we can access them directly from the derived classes
	//without the need for extra set functions
	//have to think about it
// possible fork???

//customizable default constructor

Notebook::Notebook()
{
	string name, description;
	double price;
	int id, stock;


	cout << "Input name of the notebook product: ";
	cin.ignore();
	getline(cin, name);
	//cin >> name;
	setName(name);

	cout << "Input price of the notebook: ";
	cin >> price;
	setPrice(price);

	cout << "Input description of the notebook: ";
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


	cout << "Input number of notebook sections: ";
	cin >> m_sections;
}


//derived generator
Notebook::Notebook(string name="", double price=0.0, string description="", int id=0, int stock=0, int sections=0)
	:Item{ name, price, description, id, stock }
{
	m_sections = sections;

}


string Notebook::getDetails() const
{
	//adding variable values to a string using a stream
	ostringstream oss;
	oss << "Number of sections: " << m_sections << endl;

	//then converting the stream to a string
	return oss.str();

}
