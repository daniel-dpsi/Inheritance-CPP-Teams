#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Player {
public:
	int X, Y, Z;
	string Name;
	bool Friendly;
	float Health;

	Player(const string& name = "", int x = 180, int y = 180, int z = 90, float health = 100.0, bool friendly = true)
		: Name{ name }, X{ x }, Y{ y }, Z{ z }, Health{ health }, Friendly{ friendly } {}

	int getX() { return X; }
	int getY() { return Y; }
	int getZ() { return Z; }
	const string& getname() { return Name; }
	float getHealth() { return Health; }
	bool isFriendly() { return Friendly; }

};

class EnemyPlayer : public Player {
public:
	bool Enemy;

	EnemyPlayer(bool enemy = true) : Enemy{ enemy } {}

	bool isEnemy() { return Enemy; }
	

};

int main() {
cout << "Local team - 1, Enemy team - 0\n" << endl;


//Our local team will be 1 (true)
Player player;

player.Name = "Friendly Fergus";
player.Health = 90.5;
player.X = 110;
player.Y = 14;
player.Z = 90;
player.Friendly = true;

cout << "Team: \n" << player.isFriendly() << endl;
cout << player.getname() << endl;
cout << player.getHealth() << endl;

//The enemy team will be 0 (false)
EnemyPlayer enemyplayer;

enemyplayer.Name = "Enemy Emilio";
enemyplayer.Health = 49.5;
enemyplayer.X = 79;
enemyplayer.Y = 110;
enemyplayer.Z = 64;
enemyplayer.Friendly = false;

cout << "\nTeam: \n" << enemyplayer.isFriendly() << endl;
cout << enemyplayer.getname() << endl;
cout << enemyplayer.getHealth() << endl;
cout << "Is this player an enemy? (0 - No) = (1 - Yes): " << enemyplayer.isEnemy() << endl;


}




