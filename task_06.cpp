
//  6.	В двумерном массиве размерности M x N поменять 
//      местами чётные строки с нечётными.


#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 4,
		N = 5;

	int mass[M][N];

	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			mass[i][j] = i*10 + j;

	cout << "Исходный массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%02d\t", mass[i][j]);
		cout << "\n";
	}

	cout << "\n\n";

	int mass1[M][N];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			if (i % 2 == 0) mass1[i][j] = mass[i + 1][j];
			if (i % 2 != 0) mass1[i][j] = mass[i - 1][j];
		}

	cout << "Измененный массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%02d\t", mass1[i][j]);
		cout << "\n";
	}
}