#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		long p, q;
		cin >> p >> q;
		if (((q == 1) && (p % 2 != 0)) || (q == 2)) {
			cout << "ODD" << endl;
		}
		else {
			cout << "EVEN" << endl;
		}
	}
	return 0;
}
