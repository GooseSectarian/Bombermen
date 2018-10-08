#pragma once

struct PlayerVK
{
	unsigned char up = 87;
	unsigned char down = 83;
	unsigned char right = 68;
	unsigned char left = 65;

	unsigned char setBomb = 70;

	PlayerVK(unsigned char _up, unsigned char _down, unsigned char _right, unsigned char _left, unsigned char _setBomb)
	{
		up = _up;
		down = _down;
		right = _right;
		left = _left;
		setBomb = _setBomb;
	}

	PlayerVK()
	{
		PlayerVK((unsigned char)KeyCodes::W, (unsigned char)KeyCodes::S, (unsigned char)KeyCodes::D, (unsigned char)KeyCodes::A, (unsigned char)KeyCodes::F);
	}
};

void InitController(std::vector<PlayerVK> &VKs);
void MainLoop();