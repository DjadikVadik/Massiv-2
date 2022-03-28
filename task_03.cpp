
//  3.	Дан двумерный массив размерностью M х N, заполненный случайными числами 
//      из диапазона от - 10 до 10. Определить количество положительных, 
//      отрицательных и нулевых элементов.


#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 4,
		N = 5;

	int mass[M][N];
	int n_polog = 0,
		n_otric = 0,
		n_nul = 0;
		

	srand(time(0));

    for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			mass[i][j] = rand() % 21 - 10;
			if (mass[i][j] > 0) n_polog++;
			if (mass[i][j] < 0) n_otric++;
			if (mass[i][j] == 0) n_nul++;
		}

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nКоличество положительных элементов : " << n_polog << "\n";
	cout << "Количество отрицательных элементов : " << n_otric << "\n";
	cout << "Количество элементов равных нулю : " << n_nul << "\n";
}