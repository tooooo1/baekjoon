#include <iostream>

using namespace std;

void star(int i, int j, int N) {
	if (i % 3 == 1 && j % 3 == 1) {
		cout << " ";
		return;
	}
	else if (N == 1) {
		cout << "*";
		return;
	}
	else star(i / 3, j / 3, N / 3);
}

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N);
		}
		cout << "\n";
	}
}