using namespace std;
#include "card.h"
#include "deck.h"
#include<iostream>
#include<string>

int main()
{
	string suitnames[4] = { "club", "diamond", "heart", "spade" };
	string valuenames[13] = { "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "ace" };
	cout << "line 11 bug check";
	deck* hand = new deck();

	//hand->insert(valuenames[0], suitnames[0]);
	//hand->insert(valuenames[1], suitnames[0]);

	cout << suitnames; 
	
	for (int i = 0; i++; i < 4)
	{
		cout << "for loop";
		//for (int j = 0; j++; j < 13)
		//{
		hand->insert(valuenames[0], suitnames[i]);
		//}
	}
	
	hand->show_deck();


	
}