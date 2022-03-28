
//    11.	Заполнить массив M x N следующим образом :
//      1	2	3	4	5	6
//     12	11	10	9	8	7
//     13	14	15	16	17	18
//     24	23	22	21	20	19
//     25	26	27	28	29	30


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

	for (int i = 0; i < M; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < N; j++) {
				n++;
				mass[i][j] = n;
			}
		}
		else {
			for (int j = N - 1; j >= 0; j--) {
				n++;
				mass[i][j] = n;
			}
		}
	}

		

	cout << "Наш массив : \n";
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << mass[i][j] << "\t";
		cout << "\n";
	}

}