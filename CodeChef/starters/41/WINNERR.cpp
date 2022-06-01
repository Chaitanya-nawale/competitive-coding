#include <iostream>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int p1, p2, q1, q2;
		cin >> p1 >> p2 >> q1 >> q2;
		if (max(p1, p2) == max(q1, q2)) {
			cout << "TIE" << endl;
		}
		else if (max(p1, p2) < max(q1, q2)) {
			cout << "P" << endl;
		}
		else {
			cout << "Q" << endl;
		}
	}
	return 0;
}
