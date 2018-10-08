#include "stdafx.h"
#include "Model.h"


#include "View.h"


struct Player
{
	int numBombs;
	Vector2 position;
	float velocity;

	void Move(Vector2 vectorMove)
	{
		position.x += vectorMove.x * velocity;
		position.y += vectorMove.y * velocity;
	}

	Player(int _numBombs, Vector2 _position, float _velocity) : 
		numBombs(_numBombs), position(_position), velocity(_velocity) {}

	Player() : Player(0, Vector2(0, 0), 0)
	{}
};

char** Map;
std::vector<Player> players;
std::vector<Vector2> spawners;

void PlayerMove(int playerNumber, Vector2 vectorMove)
{
	vectorMove.Normalized();
	players[playerNumber].Move(vectorMove);
}

void PlayerSetBomb(int playerNumber)
{

}
void InitPlayers(int NumPlayers, int StartNumBombs, float StartPlayerVelocity)
{
	players.resize(NumPlayers);
	for (size_t i = 0; i < players.size(); i++)
	{
		players[i]= {StartNumBombs, Vector2(), StartPlayerVelocity};
	}
}

void InitMap(int width, int height)
{
	Map = new char*[width];
	for (int i = 0; i < width; i++)
	{
		Map[i] = new char[height];
		for (int j = 0; j < height; j++)
		{
			Map[i][j] = 0;
		}
	}

}