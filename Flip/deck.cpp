#include "deck.h"
#include "card.h"
using namespace std; 

deck::deck()
{
	cout << "Build Started" << endl; 
	card* head = NULL;
	cout << "Build Started 2" << endl;

	

}

void deck::insert(string val, string sui)
{
	card* newnode = new card();
	newnode->value = val;
	newnode->suit = sui;
	newnode->next = NULL;
	cout << "line 21";
	if (head == NULL) {
	
		head = newnode;
	}
	else {
		cout << "else statement";
		card* temp = head;
		//temp->next = head; 
		while (temp->next != NULL) {
			temp = temp->next; // go to end of list
		}
		temp->next = newnode; // linking to newnode

	}
	
}

void deck::show_deck()
{
	card* temp = head;
	while (temp != NULL)
	{
		cout << "while loop";
		cout << temp->suit;
		cout << temp->value; 
		temp = temp->next; 
	}
	
}

deck::~deck()
{

}