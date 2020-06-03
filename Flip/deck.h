//header file for the class deck in the flip game project
#include"card.h"
#include<iostream>
#include<string>
using namespace std;

//define deck header
#ifndef DECK_H
#define DECK_H

class deck
{
private:
	
	
	//define the suit and value strings in an array variable
	 
	
public:
	
	card* head;
	//default conctructor
	deck();
	//function for inserting a node into the list
	void insert(string val, string sui);
	//function for displaying the contents of the deck
	void show_deck();
	//function for adding a card to the deck
	void insert_card();
	//Deconstructor
	~deck();




};









#endif
