//MALINOVSKII VLADIMIR
//GRAY CODE
#include <iostream>
#include <vector>

using namespace std;

void print(vector<bool>& v, int i = 0, bool t = true) {
	int n = v.size();
	if (i == n) {
		for (int i = 0; i < n; i++)
			cout << v[i];
		cout << endl;
		return;
	}
	if (t) {
		v[i] = 0;
		print(v, i + 1, true);
		v[i] = 1;
		print(v, i + 1, false);
	} else {
		v[i] = 1;
		print(v, i + 1, false);
		v[i] = 0;
		print(v, i + 1, true);
	}
}

int main() {
	int n;
	cin >> n;
	vector<bool> v(n, false);
	print(v);
}