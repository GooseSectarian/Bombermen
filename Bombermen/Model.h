#pragma once

struct Vector2
{
	float x;
	float y;

	void Normalized()
	{
		if (x > 0) x = 1;
		if (x < 0) x = -1;
		if (y > 0) y = 1;
		if (y < 0) y = -1;
	}

	bool operator == (Vector2 vector)
	{
		return this->x == vector.x && this->y == vector.y;
	}

	bool operator != (Vector2 vector)
	{
		return this->x != vector.x || this->y != vector.y;
	}
	Vector2(float _x, float _y) : x(_x), y(_y){}

	Vector2() : Vector2(0, 0)
	{}
};
/* 
������������ ������ �� ��������� �������
�������� player: �������� ����� ����� ������ ���������
�������� vectorMove: ������ �������� ���������
�������� �������� ��� �������� vectorMove ����� ����������
*/
void InitPlayers(int NumPlayers, int StartNumBombs, float StartPlayerVelocity);
void PlayerMove(int playerNumber, Vector2 vectorMove);

void PlayerSetBomb(int playerNumber);