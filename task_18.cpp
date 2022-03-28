
//  18.	* Сделать программу-заставку «Снегопад». На нижнюю часть консоли падают снежинки, 
//        некоторые просто вертикально, некоторые покачиваясь. Фон – чёрный или тёмно-синий. 
//        Снежинки – белые, серые, или ярко-голубые. Снежинки должны накапливаться в сугробы.

#include <iostream>
#include <windows.h>
using namespace std;

const int X = 80,
Y = 25;
char mass[Y][X];

void pustota() {

	for (int i = 0; i < Y; i++)
		for (int j = 0; j < X; j++)
			mass[i][j] = ' ';
}

void show() {

	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++)
			cout << mass[i][j];
		cout << "\n";
	}
}

void first_snow() {

	for (int i = 0; i < X; i++)
		if (rand() % 11 == 1)
			mass[0][i] = '*';
}

void snegopad() {


	for (int i = Y - 1; i >= 0; i--)
		for (int j = 0; j < X; j++) {
			if (mass[i][j] == '*') {
				mass[i][j] = ' ';

				int n = rand() % 3 - 1;
				if (i + 1 < Y && j + n < X && j + n > 0)
					mass[i + 1][j + n] = '*';
			}
		}
}

int sugroby(int n) {

	if (n > 50) {
		for (int i = 0; i < X; i++)
			mass[Y - 1][i] = '*';
	}
	if (n > 100) {
		for (int i = 5; i < 35; i++)
			mass[Y - 2][i] = '*';
		for (int i = 45; i < 74; i++)
			mass[Y - 2][i] = '*';
	}
	if (n > 150) {
		for (int i = 9; i < 30; i++)
			mass[Y - 3][i] = '*';
		for (int i = 50; i < 69; i++)
			mass[Y - 3][i] = '*';
	}
	if (n > 200) {
		for (int j = Y - 1; j > Y - 4; j--)
			for (int i = 0; i < X; i++)
				mass[j][i] = ' ';
		n = 0;
	}
	return (n);
}



void pologenie_cursora() {
	HANDLE h = GetStdHandle(-11);

	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(h, &info);


	COORD cursor;
	cursor.X = 0;
	cursor.Y = 0;
	SetConsoleCursorPosition(h, cursor);
}

int main()
{
	pustota();
	int n = 0;

	do {
		pologenie_cursora();
		snegopad();
		first_snow();
		sugroby(n);
		n = sugroby(n);
		show();
		Sleep(50);
		n++;
	} while (GetKeyState(VK_ESCAPE) >= 0);