#include <iostream>
#include "player.h"
#include "Board.h"
#include "GameManager.h"
using namespace std;
int main() {
	player Player1("Joko", 5, 10);
	player Player2("Bambang", 6, 10);
	GameManager admin(Player1, Player2, 'X', 'O');
	GameManager init();
	GameManager play();
}