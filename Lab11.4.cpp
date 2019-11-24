#include <iostream>
using namespace std;
int main() {
	int p, k, a;
	cin >> p;
	double s = 1000;
	for (k = 0; s <= 1100; k++) {
		a = s * ((100 - p) / 100);
		s = s + a;
		cout << k << endl << s;
	}
	return 0;
}
