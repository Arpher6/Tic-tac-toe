class board {
private:
	char aBoard[3][3];
public:
	board();
	bool isFull();
	bool isEmpty(int x, int y);
	char getValueatIndex(int x, int y);
	void setValueatIndex(int x, int y, char value);
	char checkSimiliarValueVertically();
	char checkSimiliarvalueHorizontally();
};