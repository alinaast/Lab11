#include <iostream>
using namespace std;
int Fib(int N)
{
	int i;
	int K = 2;
	int F1 = 1;
	int F2 = 1;
	while (F2 <= N)
	{
		F2 = F2 + F1;
		F1 = F2 - F1;
		K++;
	}
	return K;
}
int main()
{
	int A;
	setlocale(LC_ALL, "rus");
	cout << "Введите число Фиббоначи ";
	cin >> A;
	cout << endl << "Порядковый номер числа Фиббоначи равен " << Fib(A);
	return 0;
}
