#pragma once


/* 
ѕередвижение игрока по указаному вектору
ѕараметр player: указание какой игрок должен двигатьс€
ѕараметр vectorMove: вектор движени€ персонажа
ќбратите внимание что параметр vectorMove будет нормирован
*/
void PlayerMove(int playerNumber, Vector2 vectorMove);

void PlayerSetBomb(int playerNumber);