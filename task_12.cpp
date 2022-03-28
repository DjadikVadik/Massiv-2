
//  12.	Заполнить массив M x N следующим образом:
//          1	x	x	x	x	x	x	x	x	x
//          x	2	x	x	x	x	x	x	x	10
//          x	x	3	x	x	x	x	x	9	x
//          x	x	x	4	x	x	x	8	x	x
//          x	x	x	x	5	x	7	x	x	x
//          x	x	x	x	x	6	x	x	x	x

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 >0");

	const int M = 6,
		N = 10;

	int mass[M][N];

	srand(time(0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			mass[i][j] = rand() % (M * N - N) + N + 1;

	int n = 1;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			if (i == j) {
				mass[i][j] = n;
				n++;
			}
		}
	
	for (int i = M - 2; i >= 0; i--)
		for (int j = 0; j < N; j++) {
			if (i + j == N) {
				mass[i][j] = n;
				n++;
			}
		}

	cout << "Заполненый массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}
}