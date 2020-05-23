#include "Paper.h"

//we COULD declare the members of the Item class as protected so we can access them directly from the derived classes
	//without the need for extra set functions
	//have to think about it

//customizable default constructor

Paper::Paper()
{
	string name, description;
	double price;
	int id, stock;


	cout << "Input name of the paper product: ";
	cin.ignore();
	getline(cin, name);
	
	//cin >> name;
	setName(name);

	cout << "Input price of the paper: ";
	cin >> price;
	setPrice(price);

	cout << "Input description of the paper: ";
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


	cout << "Input weight: ";
	cin >> m_weight;

	cout << "Input number of pages: ";
	cin >> m_pages;
}

Paper::Paper(string name, double price, string description, int stock, int id, int weight, int pages)
	:Item{ name, price, description, stock, id }
{
	m_weight = weight;
	m_pages = pages;
}


string Paper::getDetails() const
{
	ostringstream oss;
	oss << "Weight: " << m_weight << "gr" << endl
		<< "Number of Pages: " << m_pages << endl;

	return oss.str();
}