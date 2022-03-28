
//  13.	Заполнить трёхмерный массив N x N x N нулями. В получившийся куб 
//      вписать шар, состоящий из единиц. После чего, разрезать куб на
//      N слоёв, и показать каждый слой в виде двумерного массива 
//      N x N на экране консоли.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 11;

	int mass[M][M][M];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			for (int k = 0; k < M; k++)
				mass[i][j][k] = 0;

	mass[0][5][5] = 1;                                                   // 1й и 11й срез
	mass[10][5][5] = 1;

	for (int i = 4; i < 7; i++)                                          // 2й и 10й
		for (int j = 4; j < 7; j++) {
			mass[1][5][j] = 1;
			mass[1][i][5] = 1;
			mass[9][5][j] = 1;
			mass[9][j][5] = 1;
		}

	int n = 0;
	for (int i = 3; i < 5; i++) {                                          // 3й и 9й
		for (int j = 4 - n; j < 7 + n; j++) {
			mass[2][i][j] = 1;
			mass[8][i][j] = 1;
			mass[2][10-i][j] = 1;
			mass[8][10-i][j] = 1;
		}
		n++;
	}
	for (int j = 3; j < 8; j++) {
		mass[2][5][j] = 1;
		mass[8][5][j] = 1;
	}

	n = 0;
	for (int i = 2; i < 5; i++) {                                          // 4й и 8й
		for (int j = 4 - n; j < 7 + n; j++) {
			mass[3][i][j] = 1;
			mass[7][i][j] = 1;
			mass[3][10-i][j] = 1;
			mass[7][10-i][j] = 1;
		}
		n++;
	}
	for (int j = 2; j < 9; j++) {
		mass[3][5][j] = 1;
		mass[7][5][j] = 1;
	}

	n = 0;
	for (int i = 1; i < 5; i++) {                                          // 5й и 7й
		for (int j = 4 - n; j < 7 + n; j++) {
			mass[4][i][j] = 1;
			mass[6][i][j] = 1;
			mass[4][10 - i][j] = 1;
			mass[6][10 - i][j] = 1;
		}
		n++;
	}
	for (int j = 1; j < 10; j++) {
		mass[4][5][j] = 1;
		mass[6][5][j] = 1;
	}

	for (int j = 0; j < M / 2 + 1; j++)                                  // 6й срез в самом широком месте шара
		for (int k = M / 2 - 1 - j; k <= M / 2 + 1 + j; k++) {
			mass[M / 2][j][k] = 1;
			mass[M / 2][M - 1 - j][k] = 1;
		}

	


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < M; k++)
				cout << mass[i][j][k] << " ";
			cout << "\n";
		}
		cout << "\n\n";
	}
}