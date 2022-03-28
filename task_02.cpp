
//  2.	Дан двумерный массив размерностью M х M, заполненный случайными 
//      числами из диапазона от 0 до 20. Определить сумму элементов, расположенных 
//      на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.


#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 5;

	int mass[M][M];
	int sum_1 = 0,
		sum_2 = 0;

	srand(time(0));

    for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++) {
			mass[i][j] = rand() % 21;
			if (i == j) sum_1 = sum_1 + mass[i][j];
			if (i + j == M - 1) sum_2 = sum_2 + mass[i][j];
		}

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nСумма элементов, расположенных на главной диагонали : " << sum_1 << "\n";
	cout << "Сумма элементов, расположенных на побочной диагонали : " << sum_2 << "\n";
}