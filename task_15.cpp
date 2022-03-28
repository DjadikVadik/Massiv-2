
//  15.	Создать массив размерностью M x N, заполненный случайными числами.
//      Вывести на экран  строку, для которой среднее арифметическое 
//      элементов максимально отличается от среднего арифметического 
//      значения для всех элементов массива.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 6,
		N = 10;

	int mass[M][N];

	srand(time(0));

	int sum = 0;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			mass[i][j] = rand() % 201;
			sum = sum + mass[i][j];
		}

	double srednee = sum / (M * N);
			
	cout << "Исходный массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	double mass1[M];       // одномерный массив для хранения средних арефметических строк

	for (int i = 0; i < M; i++) {
		int sum1 = 0;
		for (int j = 0; j < N; j++)
			sum1 = sum1 + mass[i][j];
		mass1[i] = sum1 / N;
	}
	
	double a = abs(srednee - mass1[0]);  // разница между средним арефметическим всех элементов массива и первой строчкой
	int n = 0;                          // переменная для хранения номера строчки максимально отличающейся

	for (int i = 0; i < M; i++) {
		double a1 = abs(srednee - mass1[i]);
		if (a1 > a) {
			a = a1;
			n = i;
		}
	}

	cout << "\nСтрока, для которой среднее арифметическое элементов максимально отличается от среднего арифметического значения для всех элементов массива :\n";
	for (int j = 0; j < N; j++) cout << mass[n][j] << "\t";
	cout << "\n\n";
}