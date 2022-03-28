
//  4.	Дан двумерный массив размерностью M х N, заполненный случайными 
//      числами из диапазона от 0 до 20. Определить сумму по каждой строке 
//      и по каждому столбцу массива.


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
			mass[i][j] = rand() % 21;

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	cout << "\n\n";

	for (int i = 0; i < M; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++)
			sum = sum + mass[i][j];
		cout << "Сумма элементов " << i << " строки равна :" << sum << "\n";
	}

	cout << "\n\n";

	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++)
			sum = sum + mass[j][i];
		cout << "Сумма элементов " << i << " столбца равна :" << sum << "\n";
	}

}