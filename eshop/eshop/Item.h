#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

//?????????????????????????????????????????????????????????
//tha htan kalo na kanoume ta includes se kathe header file pou
//ta cpp h kai to idio ta xreiazetai gia na endynamwsoume encapsulation
//kai code clarity, mhn xreiazetai kapoios na koitaei thn apo panw klash sthn ierarxia
//gia na mporesei na dei ti exoume synolika kanei include
//?????????????????????????????????????????????????????????

using namespace std;

class Item
{
public:

	//Item();

	//den mporei na exei kai default constructor kai na kanoume arxikopoihsh me auton ton tropo
	//error: ambiguous call to overloaded function
	//opote aferoume thn dhlwsw apo panw gia to Item();
	Item(string ="", double =0.0, string ="", int =0, int =0);

	//Item(string, double , string , int , int);

	string getBasicInfo() const;

	string getName() const;
	void setName(string);

	string getDescription() const;
	void setDescription(string);
	
	double getPrice() const;
	void setPrice(double);
	
	int getId() const;
	void setId(int);
	
	int getStock() const;
	void setStock(int );

	
	//PURE virtual => implementation on subclasses => abstract class
	virtual string getDetails() const = 0; 


	string toString() const; //override??

	

private:

	string m_name;
	double m_price;
	string m_description;
	int m_stock;
	int m_id;

};
#endif