
//  7.	Дан двумерный массив размерностью M x N, заполненный случайными 
//      числами из диапазона от - 100 до 100. Определить сумму элементов 
//      массива, расположенных между минимальным и максимальным элементами.


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
			mass[i][j] = rand() % 201 - 100;

	int max = mass[0][0],
		min = mass[0][0];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			if (mass[i][j] > max) max = mass[i][j];
			if (mass[i][j] < min) min = mass[i][j];
		}

	int sum = 0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (mass[i][j] == max)
			{
				if (j != N - 1)
				{
					j++;
					for (i; i < M; i++)
					{
						for (j; j < N; j++)
						{
							if (mass[i][j] == min) goto link;
							sum = sum + mass[i][j];
						}
						j = 0;
					}

				}
				else
				{
					i++;
					for (i; i < M; i++)
					{
						for (j = 0; j < N; j++)
						{
							if (mass[i][j] == min) goto link;
							sum = sum + mass[i][j];
						}
					}

				}

			}
			if (mass[i][j] == min)
			{
				if (j != N - 1) {
					j++;
					for (i; i < M; i++)
					{
						for (j; j < N; j++)
						{
							if (mass[i][j] == max)  goto link;
							sum = sum + mass[i][j];
						}
						j = 0;
					}

				}
				else {
					i++;
					for (i; i < M; i++)
					{
						for (j = 0; j < N; j++)
						{
							if (mass[i][j] == max)  goto link;
							sum = sum + mass[i][j];
						}

					}

				}

			}
		}
	}

link:

	cout << "Исходный массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	cout << "\nМаксимальный элемент массива равен :" << max << "\n";
	cout << "Минимальный элемент массива равен :" << min << "\n";
	cout << "Сумма элементов массива, расположенных между минимальным и максимальным элементами равна :" << sum << "\n";
}