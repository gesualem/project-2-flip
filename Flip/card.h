//header file for the class card in the flip game project

#include<iostream>
#include<string>
using namespace std;

//define card header
#ifndef CARD_H
#define CARD_H

class card
{
private:
	//make deck a friend class so it can access the the card class variables and functions
	friend class deck;
	
	//define the private variables of the value and suit pertaining to a single card
	string value;
	string suit;
	card* next; 

public:
	//default constructor
	card();
	//function to set the value of the card
	//void set_value(string val);
	//function to set the suit of the card
	//void set_suit(string sui);
	//function to return value of the card
	string get_value();
	//function to return suit of the card
	string get_suit();
	//function to print out the card value and suit
	void print_card();
	//deconstructor
	~card();
	

};
#endif