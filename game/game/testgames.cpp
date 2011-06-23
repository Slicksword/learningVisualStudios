#include "Cardgame.h"
int Cardgame::totalparticipants = 0;
int main() 
{
	Cardgame *bridge = 0;
	Cardgame *blackjack = 0;
	Cardgame *solitaire = 0;
	Cardgame *poker = 0;

	bridge = new Cardgame(4);
	blackjack = new Cardgame(8);
	solitaire = new Cardgame(1);
	delete blackjack;
	delete bridge;
	poker = new Cardgame(5);
	delete solitaire;
	delete poker;

	return 0;
}