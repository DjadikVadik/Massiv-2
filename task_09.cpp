
//  9.	Заполнить квадратную матрицу размером M x N по спирали.
//      Число 1 ставится в угловой (например, верхний левый) 
//      элемент, и спираль закручивается к центру матрицы.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 5;

	int mass[M][M];

	int n = 1;

	for (int k = 0; k <= M / 2 + 1; k++)
	{
		for (int j = 0 + k; j < M - k; j++)
		{
			mass[0 + k][j] = n;
			n++;
		}

		for (int i = 1 + k; i < M - k; i++)
		{
			mass[i][M - 1 - k] = n;
			n++;
		}

		for (int j = M - 2 - k; j >= 0 + k; j--)
		{
			mass[M - 1 - k][j] = n;
			n++;
		}

		for (int i = M - 2 - k; i > 0 + k; i--)
		{
			mass[i][0 + k] = n;
			n++;
		}
	}

	cout << "Заполненый массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}
}