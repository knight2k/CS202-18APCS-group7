#include "CVEHICLE.h"
#include "CGAME.h"

CGAME::CGAME()
{
	CVEHICLE * temp5, * temp6, * temp7, * temp8, * temp9;
	//CANIMAL*;


	temp5 = new CTRUCK(3, 23, "Left");
	temp6 = new CTRUCK(13, 15, "Left");
	temp7 = new CTRUCK(12, 21, "Left");
	temp8 = new CTRUCK(20, 17, "Left");
	temp9 = new CTRUCK(18, 13, "Left");

	vehicles.push_back(temp5);
	vehicles.push_back(temp6);
	vehicles.push_back(temp7);
	vehicles.push_back(temp8);
	vehicles.push_back(temp9);
}

void CGAME::startGame()
{
	drawGame();
}

void CGAME::drawGame()
{
	// Vẽ thanh trên
	gotoXY(2, 4);
	cout << char(218);
	gotoXY(116, 4);
	cout << char(191);

	for (int i = 3; i < 116; i++)
	{
		gotoXY(i, 4);
		cout << char(196);
	}
	// Vẽ 2 đường 2 bên
	for (int i = 5; i < 28; i++)
	{
		gotoXY(2, i);
		cout << char(179);
	}
	for (int i = 5; i < 28; i++)
	{
		gotoXY(116, i);
		cout << char(179);
	}
	// Vẽ đường dưới
	for (int i = 3; i < 116; i++)
	{
		gotoXY(i, 28);
		cout << char(196);
	}
	gotoXY(2, 28);
	cout << char(192);
	gotoXY(116, 28);
	cout << char(217);

	// Vẽ đường
	for (int i = 1; i < 12; i++)
	{
		gotoXY(2, 4 + i * 2);
		cout << char(198);
	}
	for (int i = 1; i < 12; i++)
	{
		gotoXY(116, 4 + i * 2);
		cout << char(181);
	}
	for (int i = 1; i < 12; i++)
	{
		for (int k = 3; k < 116; k++)
		{
			gotoXY(k, 4 + i * 2);
			cout << char(205);
		}
	}
}

void CGAME::updatePosVehicle() {
	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Move();
	}
}

CGAME::~CGAME() {
	//...
}