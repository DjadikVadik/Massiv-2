
//  14.	Реализовать преобразование двумерного массива в одномерный, и наоборот.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 5,
		N = 6;

	int mass[M][N];

	srand(time(0));

	int n = 0;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			n++;
			mass[i][j] = n;
		}

	cout << "Исхдный двумерный массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

	int mass1[M * N];
	n = 0;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			mass1[n] = mass[i][j];
			n++;
		}

	cout << "\nОдномерный массив с элементами двумерного : \n";

	for (int i = 0; i < n; i++)
		cout << mass1[i] << "\t";

	n = 0;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			mass[i][j] = mass1[n];
			n++;
		}

	cout << "\n\nДвумерный массив со значениями одномерного : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}
}