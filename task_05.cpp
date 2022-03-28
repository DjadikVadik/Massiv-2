
//  5.	Заполнить массив M x N двузначными числами так, чтобы первая 
//      цифра указывала  номер строки, а вторая – номер столбца.


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

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%02d\t", mass[i][j]);
		cout << "\n";
	}
}