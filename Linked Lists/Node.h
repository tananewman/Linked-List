//Montana Newman
//CS 1410 Final Project
//April 21, 2015
//Final Project
//I did not copy anyone's code except that which was provided. All code was designed and written by myself.
//If I'm found cheating, I realize I'll receive a 0.
//-----------------------------------------------------------------------

#include<iostream>
#include<string>
#include "CarPart.h"
using namespace std;

class Node
{
private:
	CarPart* carPartPtr;
	Node* nextNode;
public:

	//The default Node constructor
	//Purpose: creates a new Node object
	//Paramaters: none
	//Returns: none
	Node();

	//The paramaterized Node constructor
	//Purpose: creates a new Node object with the car part
	//Paramaters: carPart object
	//Returns: none
	Node(CarPart*);

	//The getCarPart function
	//Purpose: gets the pointer to carPart object
	//Paramaters: None
	//Returns: car part object points
	CarPart* getCarPart() const;

	//The getNextNode function
	//Purpose: gets the next node pointer
	//Parameters: None
	//Returns: Node pointer 
	Node* getNextNode() const;

	//The SetNextNode function
	//Purpose: Sets the next node pointer
	//Parameters: None
	//Returns: none
	void setNextNode(Node*);

	//destructor
	~Node();
};

class List
{
private:
	Node* firstNode;
	Node* lastNode;
	int count;

public:
	//The default List constructor
	//Purpose: creates a new List object
	//Parameters: none
	//Returns: none
	List();

	//the push_front function
	//Purpose: Push a node object to the front of the list
	//Parameters: a new node* object
	//Returns: None
	void push_front(Node*);	

	//the pop_front function
	//Purpose: unlinks the node object from the front of the list
	//Parameters: none
	//Returns: a pointer to the first node
	Node* pop_front();

	//the push_back function
	//Purpose: takes a Node* as a parameter and adds the node pointed to by the pointer
	//to the end of the list
	//Parameters: a new node* object
	//Returns: None
	void push_back(Node*);

	//the pop_back function
	//Purpose: Removes the last node from the list and returns a pointer to this node
	//to the end of the list
	//Parameters: a new node* object
	//Returns: last item in list
	Node* pop_back();

	//the getFirst function
	//Purpose: returns pointer from first node
	//Parameters: a new node* object
	//Returns: pointer to the first node in the list
	Node* getFirst() const;

	//Destructor
	~List();
};