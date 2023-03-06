//train simulator- shows basics of linked lists in C++
#include <iostream>
using namespace std;

enum CarType { engine, tanker, box, passenger, caboose };

class Node {
public:
	int carNumber;
	int carType;
	bool isFull;
	Node* next;
};


//this function inserts a new node in FRONT of the list---------------------------------------------------
void addFront(Node** head, int num, int type, bool full) {
	//make a new car
	Node* newNode = new Node;

	//give it its data
	newNode->carNumber = num;
	newNode->carType = type;
	newNode->isFull = full;

	//set next of new node as head
	newNode->next = (*head);

	//move the head to point to the new node 
	(*head) = newNode;
}

//this function adds a new node AFTER a given node------------------------------------------------------
void addAfter(Node* prev_node, int num, int type, bool full) {
	//check if previous node is NULL, give error message if it is
	if (prev_node == NULL) {
		cout << "Error";
	}
	//make a new car
	Node* newNode = new Node;

	//give it its data
	newNode->carNumber = num;
	newNode->carType = type;
	newNode->isFull = full;
	

	//set next to the "next" of the previous node
	newNode-> next = prev_node-> next;

	//move the next of the previous node as the new node
	prev_node->next = newNode;
}

//this function prints out the whole list----------------------------------------------------------------
void displayList(Node* node) {

	cout << "Printing Train! Choo Choo!" << endl << endl;
	//traverse the list to display each node
	while (node != NULL) {
		cout << "[ ";
		if (node->carType == 0)
			cout << "engine";
		else if (node->carType == 1)
			cout << "tanker";
		else if (node->carType == 2)
			cout << "boxcar";
		else if (node->carType == 3)
			cout << "passenger";
		else
			cout << "caboose!";


		if (node->isFull == 1)
			cout << " is full";
		else
			cout << " is empty";

		cout << " # ";
		cout << node->carNumber << " ] --> ";
		node = node->next;
	}

	if (node == NULL)
		cout << "end" << endl << endl; //end of train

}


int main() {
	Node* head = NULL;
	addFront(&head, 2394, caboose, 0);
	addFront(&head, 100, box, 1);
	addFront(&head, 2394, passenger, 1);
	addFront(&head, 2394, tanker, 0);
	addFront(&head, 2005, engine, 0);

	addAfter(head->next, 4870, engine, 1);

	displayList(head);
}

//Enum: is like a list with slots. Its a easier way to instantiate a variable with a specific number in the enum


//*: is An asterisk is used in C++ to declare a pointer. 
// Pointers allow you to refer directly to values in memory, and allow you to modify elements that would otherwise only be copied

//**: It means that the variable is dereferenced twice. Assume you have a pointer to a pointer to char like this: char** variable = ...; 
//If you want to access the value this pointer is pointing to, you have to dereference it twice: **variable.


//->: An Arrow operator in C/C++ allows to access elements in Structures and Unions. 
// It is used with a pointer variable pointing to a structure or union. 
//The arrow operator is formed by using a minus sign, followed by the greater than symbol as shown below. 


//&: The ampersand symbol & is used in C++ as a reference declarator in addition to being the address operator. 
// The meanings are related but not identical. 
