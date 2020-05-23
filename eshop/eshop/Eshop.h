#ifndef ESHOP_H
#define ESHOP_H

#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Owner.h"
#include "Buyer.h"
#include "Pen.h"
#include "Paper.h"
#include "Pencil.h"
#include "Notebook.h"


using namespace std;

class Eshop
{
public:

	Eshop();

	//mporei kai na mhn eiani void
	//na epistrefoun ena kwdiko astoxias???
	void addItem(Item*);
	Item* getItemById(int);

	//POIO ITEM APO POU?
	//ORISMATA???
	void removeItem();


	void removeBuyer();

	//orismata???
	void updateItemStock();

	void showCategories(list <Item*>);
	//pws tha epilegetai h kathgoria???
	void showProductsInCategory(list <Item*>);

	//poio proion???
	void showProduct(list <Item*>);

	void checkStatus(list <Buyer>);

	//helper function to get members of Item
	void getInputForItemMembers(istringstream* const, string&, double&, string&, int&, int&);
	
private:

	string m_name;
	Owner m_owner;
	//xreiazetai Item pointers gia na mporoume na ylopoihsoume polymorphismo
	//efoson to item einia abstract
	list <Item*> m_pitemsList;
	list <Buyer> m_buyersList;



};



#endif // !EHOSP_H
