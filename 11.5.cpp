#include <iostream>
using namespace std;
int main()
{
	int a, b, c, A, B;
	cin >> A >> B;
	a = A / B;
	b = A % B;
	while (a != 0)
	{
		c = b;
		a = B / b;
		b = B % b;
	}
	cout << c;
	return 0;
}

