#include "CGAME.h"

using namespace std;

bool IS_RUNNING = true;
int KEY = NULL;
CGAME newGAME;

void exitGame(thread* t) 
{
	system("cls");
	IS_RUNNING = false;
	t->join();
}

void threadForGame()
{
	gotoXY(90, 1);
	while (IS_RUNNING) {
		/*if (KEY != NULL) {
			newGAME.updatePosPeople(KEY);
			KEY = NULL;
		}*/

		newGAME.updatePosVehicle();
		//newGAME.updatePosAnimal();
		/*if (newGAME.getPeople().isImpact(newGAME.getVehicle()) ||
			newGAME.getPeople().isImpact(newGAME.getAnimal())) {
			IS_RUNNING = false;
		}*/
		Sleep(25);
	}
}

int main()
{
	newGAME.startGame();
	thread game(threadForGame);
	fixConsoleWindow();
	system("pause");
	return 0;
}