//Montana Newman
//CS 1410 Final Project
//April 21, 2015
//Final Project
//I did not copy anyone's code  except that which was provided. All code was designed and written by myself.
//If I'm found cheating, I realize I'll receive a 0.
//-----------------------------------------------------------------------

#include "Node.h"

//----------Node Class--------------
Node::Node()
{
	CarPart* carPartPtr = nullptr;
	Node* nextNode = nullptr;
}

Node::Node(CarPart* _car)
{
	carPartPtr = _car;
}

CarPart* Node::getCarPart() const
{
	return carPartPtr;
}

Node* Node::getNextNode() const
{
	return nextNode;
}

void Node::setNextNode(Node* _n)
{
	nextNode = _n;
}


Node::~Node()
{
	delete carPartPtr;
}

//----------List Class----------------
List::List()
{
	Node* firstNode = nullptr;
	Node* lastNode = nullptr;
	int count = 0;
}

void List::push_front(Node* n)
{
	if (firstNode == NULL)		//if it's empty
	{
		firstNode = n;
		lastNode = firstNode;
		count++;
	}
	else
	{
		n->setNextNode(firstNode);
		firstNode = n;
		count++;
	}
}

Node* List::pop_front()
{
	if (firstNode == NULL)		//if it's empty
		return NULL;
	else
	{
		Node* tempPtr = firstNode;
		firstNode = firstNode->getNextNode();
		count--;
		return tempPtr;
	}

}

void List::push_back(Node* n)
{
	if (lastNode == NULL)		//if empty
	{
		lastNode = n;
		firstNode = lastNode;
		count++;
	}
	else
	{
		n->setNextNode(nullptr);

		lastNode->setNextNode(n);  //access current last nodes pointer and point it to n, the next in chain									
		lastNode = n;

		count++;					//increment count
	}
}

Node* List::pop_back()
{
	if (lastNode == NULL)		//if it's null then we have an empty list.
		return NULL;
	else
	{
		Node* tempLastPtr = lastNode;		//to return last node after unlinking
		Node* searchPtr = firstNode;		//pointer to search list for second to last node.  It starts at beginning of list.

		while (searchPtr->getNextNode()->getNextNode() != nullptr)		//searches the list until it finds the last node (which we know will have a null pointer)
		{
			searchPtr = searchPtr->getNextNode();
		}
		lastNode = searchPtr;

		lastNode->setNextNode(nullptr);		//set the new last node's pointer to null now. 
		count--;
		return tempLastPtr;
	}
}

Node* List::getFirst() const
{
	return firstNode;
}

List::~List()
{
	Node * next = firstNode;

	while (next->getNextNode() != nullptr)
	{
		Node* temp = next;
		next = next->getNextNode();
		delete temp;
	}
}



