#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int p, q;
		cin >> p >> q;
		if (p == q) {
			cout << 0 << endl;
		}
		else if (q > p) {
			cout << q - p << endl;
		}
		else if ((p - q) % 2 == 0) {
			cout << (p - q) / 2 << endl;
		}
		else {
			cout << ((p - q) / 2) + 2 << endl;
		}
	}
	return 0;
}
