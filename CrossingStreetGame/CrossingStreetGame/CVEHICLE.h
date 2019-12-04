#pragma once
#include "header.h"
class CVEHICLE {
protected:
	int mX, mY;
public:
	virtual void Move() = 0;
	int getMX();
	int getMY();
};

class CTRUCK : public CVEHICLE
{
	string beginSide;
public:
	void Move();
	void Draw();
	CTRUCK();
	CTRUCK(string);
	CTRUCK(int, int);
	CTRUCK(int, int, string);
};

class CCAR : public CVEHICLE
{
public:
	CCAR();
	CCAR(int, int);
	void draw();
	void Move();
};


