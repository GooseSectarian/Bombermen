#pragma once

struct PlayerVK
{
	unsigned char up;
	unsigned char down;
	unsigned char right;
	unsigned char left;

	unsigned char setBomb;

	PlayerVK(unsigned char _up, unsigned char _down, unsigned char _right, unsigned char _left, unsigned char _setBomb) :
		up(_up), down(_down), right(_right), left(_left), setBomb(_setBomb) {}

	PlayerVK() : PlayerVK('W', 'S', 'D', 'A', 'F')
	{}
};

void InitController(std::vector<PlayerVK> &VKs);
void MainLoop();