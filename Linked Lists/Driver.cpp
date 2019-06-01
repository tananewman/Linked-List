//Montana Newman
//CS 1410 Final Project
//April 21, 2015
//Final Project
//I did not copy anyone's code  except that which was provided. All code was designed and written by myself.
//If I'm found cheating, I realize I'll receive a 0.
//-----------------------------------------------------------------------
#include <iostream>
#include "Node.h"
using namespace std;

// the printlist function
// Purpose: Prints out the contents for each Node in the List
// Parameter: A list object, by const reference
// Returns: none
void printList(const List&);

int main()
{

	// set up cout for displaying prices
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// create a List object
	List partsList;

	cout << "\nPart I: multiple node test: push_front and pop_front\n";
	cout << "\n----------------------------------\n";
	// build a List using push_front
	partsList.push_front(new Node(new CarPart("FL2016", "Oil Filter", 18.95)));
	partsList.push_front(new Node(new CarPart("RS12YC", "Spark Plug", 4.15)));
	partsList.push_front(new Node(new CarPart("D5941", "Digital Tire Guage", 12.15)));
	partsList.push_front(new Node(new CarPart("G19216", "Car Wash Solution", 8.15)));

	cout << "\nThe original nodes in the List:\n";
	printList(partsList);
	cout << "\n----------------------------------\n";

	// test push_front function
	cout << "\nAdding to the front of the List:\n";
	cout << "\n----------------------------------\n";
	partsList.push_front(new Node(new CarPart("X-5077a", "Wiper Blades", 15.45)));
	partsList.push_front(new Node(new CarPart("T-280RA", "Turtle Wax Chrome Polish", 3.15)));

	printList(partsList);
	cout << "\n----------------------------------\n";

	// test pop-front
	cout << "\nRemoving the first node from the list.\n";
	cout << "\n----------------------------------\n";
	Node* item = partsList.pop_front();
	printList(partsList);
	if (item != NULL)
		delete item;

	cout << "\n----------------------------------\n";
	cout << "\nPart Two: Push_back and pop_back";

	// test push_back
	partsList.push_back(new Node(new CarPart("C120-X", "Assorted Fuses", 7.25)));
	partsList.push_back(new Node(new CarPart("CTK-120706", "Mechanic Tool set", 126.00)));

	cout << "\nAdding two nodes at the end\n";
	cout << "\n----------------------------------\n";
	printList(partsList);

	// test pop-back
	cout << "\n----------------------------------\n";
	cout << "\nRemove last node from the list\n";
	cout << "\n----------------------------------\n";
	item = partsList.pop_back();
	
	printList(partsList);
	if (item != NULL)
		delete item;

	cout << "\n-------------------------------------------\n";
	cout << "\nEnd of Test";
	cout << "\n-------------------------------------------\n";
	system("PAUSE");
	return 0;
}

// you have to fill in the code for this function
void printList(const List& theList)
{
	if (theList.getFirst() == nullptr)
		cout << "The list is empty. \n";
	
	else{
		Node* temp;
		temp = theList.getFirst();		
		
		while (temp!= nullptr)
		{
			CarPart* c = temp->getCarPart();		//creates a new pointer to store the car part in

			//calls and prints the car parts
			cout << c->getPartNum() << " ";
			cout << c->getPartDescription() << " ";			
			cout << "$" << c->getPartPrice() << "\n";

			temp = temp->getNextNode();		//accesses the next node!
		}
	}
}
