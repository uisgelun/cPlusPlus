// dimitris_eshop_Testing_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
#include "Notebook.h"
#include "Pen.h"
#include "Pencil.h"
#include "Paper.h"

//using namespace std;

int main()
{
    /*****************
     // first test

        Item test1;
        cout << test1.getPrice() << endl;
        cout << test1.getStock() << endl;
        cout << test1.getId() << endl;
    
    *****************/

   /*********************************** 
    //testing poly/Polymorphismos baby

    Item item1;
    Item* itemPtr=0;
    Notebook note1;
    Notebook* notePtr=0;


    itemPtr = &item1;
    cout << itemPtr->getId() << "        " << itemPtr->getDetails() << endl;


    itemPtr = &note1;
    cout << itemPtr->getId() << "        " << itemPtr->getDetails() << endl;
    //Polymorphismos
    ***********************************/

    /**************************************/
    //second test
    //testing constructor of notebook
    /*
    Notebook note1("NotebookSkag", 2.1, "beautiful", 166, 5, 3);

    cout << endl << note1.getDetails() << endl;  

    cout << note1.getBasicInfo();
    note1.setStock(12);
    cout << note1.getBasicInfo(); 

    cout << note1.toString();
    */
    /**************************************/

    
    Pen pen1("Bic Pen", 1.2, "Your everyday pen for general use.", 745, 25, "Blue", 0.12);
    Pen pen2("Poet's Pen", 3.5, "For poetry on the go", 674, 1, "Green", 0.3);
    Pen pen3("Stabilo Pen", 2.1, "For special occasions.", 256, 3, "Black", 0.5);
    
    Pen a_pen[3] = { pen1, pen2, pen3 };

    cout << a_pen[0].toString();
    cout << a_pen[1].toString();
    cout << a_pen[2].toString();
     
    Pencil pencil1("Staedtler Pencil", 0.79, "For general use hard pencil.", 222, 100, 0.25, "H");
    cout << pencil1.toString();

    Notebook notes1("Skag Flex", 3.99, "Flexible cover, high quality paper.", 365, 65, 3);
    cout << notes1.toString();

    Paper paper1("Skag Soft Paper", 0.03, "Enviroment friendly recyclable printer paper.", 222, 9001, 1, 100);
    cout << paper1.toString();

    Notebook notes2;
    cout << notes2.toString();

    Paper paper2;
    cout << paper2.toString();

    Pen pen4;
    cout << pen4.toString();

    Pencil pencil2;
    cout << pencil2.toString();
    




    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
