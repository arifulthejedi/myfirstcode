#include <iostream>

// spliting number with comma

using namespace std;

int main() {
	int n;
	cout << "Enter The Nuber: ";
	cin >> n;
	if (n < 200000000) {
		string number = to_string(n);
		int len = number.length();
		int reminder = len % 3;
		int i = 0;
		if (len <= 2) {
			if (len == 2) {
				cout << number[0] << number[1];
				exit(0);
			} else {
				cout << number[0];
				exit(0);
			}
		}
		while (i < len) {
			if (reminder) {
				for (int n = 0; n < reminder; n++) {
					cout << number[i];
					i++;
				}
				cout << ",";
				reminder = 0;
			}
			for (int n = 0; n < 3; n++) {
				cout << number[i];
				i++;
				if (i == len)
					exit(0);
			}
			cout << ",";
		}
	}
}
