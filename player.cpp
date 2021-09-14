#include "player.h"

player::player() {
	aUsername = "";
	WinCount = 0;
	matchCount = 0;
}
player::player(string uname, int win, int match) {
	aUsername = uname;
	WinCount = win;
	matchCount = match;
}
void player::setUsername(string uname) {
	aUsername = uname;
}
string player::getUsername() {
	return aUsername;
}
void player::setWincount(int win) {
	WinCount = win;
}
int player::getwincount() {
	return WinCount;
}
void player::setMatchcount(int match) {
	matchCount = match;
}
int player::getmatchCount() {
	return matchCount;
}
