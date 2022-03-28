
// 1.	Дан двумерный массив размерностью M х N, заполненный случайными числами
//      из диапазона от 0 до 20. Определить сумму элементов массива, среднее арифметическое,
//      минимальный и максимальный элемент.


#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 4,
		N = 5;

	int mass[M][N];
	int sum = 0,
		srednee,
		max = 0,
		min = 20;

	srand(time(0));

    for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			mass[i][j] = rand() % 21;
			sum = sum + mass[i][j];
			if (mass[i][j] > max) max = mass[i][j];
			if (mass[i][j] < min) min = mass[i][j];
		}

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nСумма элементов массива : " << sum << "\n";
	cout << "Cреднее арифметическое элементов массива : " << (double) sum / (M*N) << "\n";
	cout << "Минимальный элемент массива : " << min << "\n";
	cout << "Максимальный элемент массива : " << max << "\n";
}