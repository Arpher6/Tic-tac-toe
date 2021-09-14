#include "GameManager.h"

GameManager::GameManager() {
sym1: "\0";
sym2: "\0";
}
void GameManager::init() {
	//nilai symbol
	cout << "Player 1 : " << sym1 << endl;
	cout << "Player 2 : " << sym2 << endl;
	// match count
	Player1.setMatchcount(3);
	Player2.setMatchcount(3);
}
void GameManager::turn(char sym) {
	int x;
	int y;
	cin >> x;
	cin >> y;
	if (b.isEmpty(x, y) == true)
		b.setValueatIndex(x, y, sym);
	else
	cin >> x;
	cin >> y;
}
void GameManager::play() {
	int step = 0;
	while (b.isFull() && checkWin() == 'N') {
		step++;
		if (step % 2 == 1) // player 1 turn
		{
			cout << Player1.getUsername() << "'s turn" << endl;
			turn(sym1);
		}
		if (step % 2 == 2) // player 2 turn
		{
			cout << Player2.getUsername() << "'s turn" << endl;
			turn(sym2);
		}
		cout << endl;
		for (int x = 0; x < 3;x++) {
			for (int y = 0; y < 3; y++) {
				b.getValueatIndex(x, y);
			}
		}
	}
	// penentu menang
	if (checkWin() == 'X')
		cout << "Player 1 menang" << endl;
	else if (checkWin() == 'O') 
		cout << "Player 2 menang" << endl;
	else
		cout << "Permainan Seri" << endl;
}
char GameManager::checkWin() {
	if (b.checkSimiliarvalueHorizontally() != ' ')
		return b.checkSimiliarvalueHorizontally();
	else if (b.checkSimiliarValueVertically() != ' ')
		return b.checkSimiliarValueVertically();
}
