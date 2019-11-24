#include <iostream>
using namespace std;
int main() {
	int n, k, s;
	cin >> n;
	s = 0;
	for (k = 1; k < n; k++) {
		s = s + k;
	}
	cout << k << endl << s;
	return 0;
}