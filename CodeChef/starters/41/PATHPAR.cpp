#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int m = 0; m < T; m++)
	{
		int i, j;
		cin >> i >> j;
		if ((i % 2 == 0) || (j == 1)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}

	}
	return 0;
}
