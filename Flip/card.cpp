//include header file to go along with class
#include "card.h"

//default constructor
card::card()
{
	
}

/*void card::set_value(string val)
{
	this->value = val;
}

void card::set_suit(string sui)
{
	this->suit = sui;
}
*/
string card::get_value()
{
	return value;
}

string card::get_suit()
{
	return suit;
}

void card::print_card()
{
	cout << value << " " << suit << endl;
}
card::~card()
{

}