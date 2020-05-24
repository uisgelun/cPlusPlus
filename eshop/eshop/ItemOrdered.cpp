#include "ItemOrdered.h"
#include <string>

	//ItemOrdered::ItemOrdered(Item item, int quantity) {
	//	this->item = item;
	//	this->quantity = quantity;
	//}
	ItemOrdered::ItemOrdered(Item * item, int q) {
	cout << "Inside itemOrdered";
	//Item* i = &pen;
	m_item = item;
	m_quantity = q;
}

ItemOrdered::ItemOrdered(Pen pen, int q) {
	cout << "Inside itemOrdered";
	Item* i = &pen;
	m_item = i;
	m_quantity = q;
}

ItemOrdered::ItemOrdered(Pencil pencil, int q) {
	Item* i = &pencil;
	m_item = i;
	m_quantity = q;
}

ItemOrdered::ItemOrdered(Notebook notebook, int q) {
	Item* i = &notebook;
	m_item = i;
	m_quantity = q;
}

ItemOrdered::ItemOrdered(Paper paper, int q) {
	Item* i = &paper;
	m_item = i;
	m_quantity = q;
}
