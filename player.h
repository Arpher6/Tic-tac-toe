#include <string>
using namespace std;
class player {
private:
	string aUsername;
	int WinCount;
	int matchCount;
public:
	player();
	player(string uname, int win, int match);
	void setUsername(string uname);
	string getUsername();
	void setWincount(int win);
	int getwincount();
	void setMatchcount(int match);
	int getmatchCount();
};
