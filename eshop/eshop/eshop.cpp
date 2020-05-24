<<<<<<< Updated upstream
#include "Eshop.h"
=======
// eshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Item.h"
#include "ItemOrdered.h"
#include "ShoppingCart.h"
>>>>>>> Stashed changes



Eshop::Eshop()
{
	//sloppy variables needs some work
	ifstream inFile;
	string line, itemType, itemName, price, description, stock, id, color, tip, type, pages, weight, sections;
	double priced=0.0, tipd=0.0;
	int stocki=0, idi=0, pagesi=0, weighti = 0, sectionsi=0;

	string openfile = "initializationOfItems.txt";
	//cout << "Enter the name of the file with the item initialization:";
	//cin >> openfile;
	
	//ng the file
	inFile.open(openfile);

	//did file open correctly?
	if (!inFile)
	{
		cout << "ERROR could not open file!!!" << endl;
		exit (1);
	}

	//reading while the file still has lines, till we find EOF
	//we read from the file that we opened on the input file stream variable
	//and we put the line until we fine the new line char to the variable line
	while (getline(inFile, line))
	{
		//we create an iput string stream and we dump on it the first line of the file we opened until we get to the new line character
		//we recreate the string stream for every line, we need to refreash it
		istringstream linestream(line);

		//we read/PARSE each field that is seperated by '|'
		//we convert each field to a string
		//some fields need to be double or int
		//and we use the stoi and stod to do the conversion
		getline(linestream, itemType, '|');

		if (itemType == "Pen")
		{
			//error attempting to referce a deleted fucntion
			//cause: cannot pass a copy of istringstream, needs to be passed as reference
			//getInputForItemMembers(linestream, itemName, priced, description, stocki, idi);

			getInputForItemMembers(&linestream, itemName, priced, description, stocki, idi);

			getline(linestream, color, '|');
			getline(linestream, tip, '|');
			tipd = stod(tip);
			

			m_pitemsList.push_back( new Pen(itemName, priced, description, stocki, idi, color, tipd));

		}
		else if (itemType == "Pencil")
		{
			getInputForItemMembers(&linestream, itemName, priced, description, stocki, idi);
			getline(linestream, tip, '|');
			tipd = stod(tip);
			getline(linestream, type, '|');

			m_pitemsList.push_back(new Pencil(itemName, priced, description, stocki, idi, tipd, type));
		}
		else if (itemType == "Paper")
		{
			getInputForItemMembers(&linestream, itemName, priced, description, stocki, idi);
			getline(linestream, weight, '|');
			weighti = stoi(weight);
			getline(linestream, pages, '|');
			pagesi = stoi(pages);

			m_pitemsList.push_back(new Paper(itemName, priced, description, stocki, idi, weighti, pagesi));
		}
		else if (itemType == "Notebook")
		{
			getInputForItemMembers(&linestream, itemName, priced, description, stocki, idi);
			getline(linestream, sections, '|');
			sectionsi = stoi(sections);

			m_pitemsList.push_back(new Notebook(itemName, priced, description, stocki, idi, sectionsi));

		}
		else
		{
			cout << endl << endl << "ERROR ERROR ERROR" << endl << "name: " << itemType << endl;
		}
	}

	printItemsList();
}

//mporei kai na mhn eiani void
//na epistrefoun ena kwdiko astoxias???
void Eshop::addItem()
{
	int itemType=0;
	cout << "Type the number of the item you would ilke to add:" << endl
		<< "1. Notebook" << endl
		<< "2. Pencil" << endl
		<< "3. Pen" << endl
		<< "4. Paper" << endl
		<< "Choice:	";
	cin >> itemType;

	switch (itemType)
	{
	case 1:
		m_pitemsList.push_back(new Notebook());
		break;
	case 2:
		m_pitemsList.push_back(new Pencil());
		break;
	case 3:
		m_pitemsList.push_back(new Pen());
		break;
	case 4:
		m_pitemsList.push_back(new Paper());
		break;
	default:
		cout << endl << "**********ERROR INPUT************" << endl;
	}
	cout << endl <<"****" << "Added item: ****" << endl
		<< (*(--m_pitemsList.end()))->toString() 
		<< "********" << endl;

	cout << "Fully updated List of items: " << endl;
	printItemsList();
}

Item* Eshop::getItemById(int id)
{
	for (list<Item*>::iterator it = m_pitemsList.begin(); it != m_pitemsList.end(); ++it)
	{
		if ((*it)->getId() == id)
		{
			return *it;
		}
	}
	cout << "**********   Item with matching ID was not found!   ************" << endl;
	return NULL;
}

//POIO ITEM APO POU?
//ORISMATA???
void Eshop::removeItem(int id)
{
<<<<<<< Updated upstream
	int initialSize;
	initialSize = static_cast <int> (m_pitemsList.size());
	for (list<Item*>::iterator it = m_pitemsList.begin(); it != m_pitemsList.end(); ++it)
	{
		if ((*it)->getId() == id)
		{
			cout << "***********   Delted Item:   **************" << endl;
			cout << (*it)->toString();

			m_pitemsList.erase(it);
			break;
		}
	}

	if (initialSize == m_pitemsList.size())
	{
		cout << "Item with requested id was not found, "
			<< "no change to the items List." << endl;
	}
	else
	{		
		cout << "************   Updated List:  *************" << endl;
		printItemsList();
	}
=======
    Pen pen1("Bic Pen", 1.2, "Your everyday pen for general use.", 745, 25, "Blue", 0.12);
    ShoppingCart shoppingCart;
    shoppingCart.addItemOrdered(pen1, 4);
    /*cout << pen1.toString();
    Item *i = &pen1;
    ItemOrdered io(i, 4);
    cout << i->getDetails();*/
    //ItemOrdered itemOrdered(pen1, 4);


>>>>>>> Stashed changes
}


void Eshop::removeBuyer()
{

}

//orismata???
void Eshop::updateItemStock()
{

}

void Eshop::showCategories(list <Item*>)
{

}
//pws tha epilegetai h kathgoria???
void Eshop::showProductsInCategory(list <Item*>)
{
	 
}

//poio proion???
void Eshop::showProduct(list <Item*>)
{

}

void Eshop::checkStatus(list <Buyer>)
{

}

void Eshop::getInputForItemMembers(istringstream* const linestream, string& name, double& price, string& description, int& stock, int& id)
{

	string tmpPrice, tmpId, tmpStock;

	getline(*linestream, name, '|');

	getline(*linestream, tmpPrice, '|');
	price = stod(tmpPrice);

	getline(*linestream, description, '|');

	getline(*linestream, tmpStock, '|');
	stock = stoi(tmpStock);

	getline(*linestream, tmpId, '|');
	id = stoi(tmpId);

}

//giati h parametros ksypaei otan vazw const?????
void Eshop::printItemsList() const
{
	//accessing the list we created and printing each item we have added
	//why ++it and not it++???????????
	//thewritika to .begin() fernei thn prwth thesh h' thn thesh prin thn prwth? OR
	//einai gia na mhn ftasoume sthn end kai ktyphsei???

	//PROSOXH THELEI CONST_ITERATOR koita 3 sxolio apo panw
	for (list<Item*>::const_iterator it = m_pitemsList.begin(); it != m_pitemsList.end(); ++it)
	{
		cout << (*it)->toString();
		//einai se lista, akoma kai ean svhsoume ta stoixeia h lista paramenei??
		// delete(*it)
	}
}
