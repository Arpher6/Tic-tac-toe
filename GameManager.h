#pragma once
#include "player.h"
#include "Board.h"
#include <iostream>
using namespace std;
class GameManager
{
private:
	board b;
	GameManager(player p1, player p2, char symbol1, char symbol2);
	player Player1;
	player Player2;
	char sym1;
	char sym2;

public:
	GameManager();
	void init();
	void turn(char sym);
	void play();
	char checkWin();
};

