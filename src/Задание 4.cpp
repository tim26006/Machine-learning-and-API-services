#include <iostream>
#include <Windows.h>
#include <locale>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 3;
	const int m = 3;
	int arr[n][m];
	int summ = 0;
	int diag_one = 0;
	int diag_two = 0;

	cout << "Введите кол-во строк и столбцов:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}

	cout << "Сумма элементов в тех строках, которые не содержат отрицательных элементов:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if ((arr[i][0] > 0) && (arr[i][1] > 0) && (arr[i][2] > 0))
				summ += arr[i][j];
		}
	cout << summ << endl;

	cout << "Минимум среди сумм элементов диагоналей, параллельных главной диагонали:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			diag_one = arr[0][1] + arr[1][2];
			diag_two = arr[1][0] + arr[2][1];
		}
	if (diag_one > diag_two)
		cout << diag_two;
	if (diag_one < diag_two)
	  cout << diag_one;
	if (diag_one == diag_two)
		cout << "Сумма диагоналей равна!";
}