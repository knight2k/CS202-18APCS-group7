#include "CVEHICLE.h"

int CVEHICLE::getMX() {
	return mX;
}

int CVEHICLE::getMY() {
	return mY;
}

void CCAR::draw()
{
	gotoXY(mX, mY);
	cout << char(254);
	gotoXY(mX + 1, mY);
	cout << char(178) << endl;
	gotoXY(mX + 2, mY);
	cout << char(254) << endl;
}
CCAR::CCAR() {
	mX = 0;
	mY = 25;
}

CCAR::CCAR(int a, int b) {
	mX = a;
	mY = b;
}
void CCAR::Move()
{
	gotoXY(mX, mY);
	cout << " ";
	gotoXY(mX + 1, mY);
	cout << " ";
	gotoXY(mX + 2, mY);
	cout << " ";
	++mX;
	draw();
	if (mX + 2 == 114)
	{
		gotoXY(mX, mY);
		cout << " ";
		gotoXY(mX + 1, mY);
		cout << " ";
		gotoXY(mX + 2, mY);
		cout << " ";
		mX = 3;
	}
}

void CTRUCK::Move() {
	gotoXY(mX, mY);
	cout << " " << endl;
	gotoXY(mX + 1, mY);
	cout << " " << endl;
	mX += 1;
	Draw();
	if (mX == 114 && beginSide == "Left") {
		gotoXY(mX, mY);
		cout << " " << endl;
		gotoXY(mX + 1, mY);
		cout << " " << endl;
		mX = 3;
	}
	/*if (mX == 0 && beginSide == "Right") {
		gotoXY(mX, mY);
		cout << " " << endl;
		gotoXY(mX + 1, mY);
		cout << " " << endl;
		mX = 115;
	}*/
}

CTRUCK::CTRUCK() {
	mX = 3;
	mY = 15;
	beginSide = "Left";
}

CTRUCK::CTRUCK(int x, int y, string side) {
	mX = x;
	mY = y;
	beginSide = side;
}

CTRUCK::CTRUCK(string side) {
	mX = 3;
	mY = 25;
	beginSide = side;
}

CTRUCK::CTRUCK(int x, int y) {
	mX = x;
	mY = y;
	beginSide = "Left";
}

void CTRUCK::Draw() {
	if (beginSide == "Left") {
		gotoXY(mX, mY);
		cout << char(178) << endl;
		gotoXY(mX + 1, mY);
		cout << char(254) << endl;
	}
	if (beginSide == "Right") {
		gotoXY(mX, mY);
		cout << char(254) << endl;
		gotoXY(mX + 1, mY);
		cout << char(178) << endl;
	}
}


