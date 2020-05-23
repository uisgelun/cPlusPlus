#include "Eshop.h"



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
	//accessing the list we created and printing each item we have added
	//why ++it and not it++???????????
	for (list<Item*>::iterator it = m_pitemsList.begin(); it != m_pitemsList.end(); ++it)
	{
		cout << (*it)->toString();
		//einai se lista, akoma kai ean svhsoume ta stoixeia h lista paramenei??
		delete(*it);
	}
	
	//option for prof
	//string filename;
	//cout << "Give the name of the file for the initialization of items list: " << endl;
	//cin >> filename;





}

//mporei kai na mhn eiani void
//na epistrefoun ena kwdiko astoxias???
void Eshop::addItem(Item*)
{

}
Item* Eshop::getItemById(int)
{
	return NULL;
}

//POIO ITEM APO POU?
//ORISMATA???
void Eshop::removeItem()
{

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