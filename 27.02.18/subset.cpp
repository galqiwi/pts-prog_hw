//MALINOVSKII VLADIMIR
//SUBSET

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> v(n, false);
	while (true) {
		int tmp = -1;
		for (int i = n - 1; i >= 0; i--)
			if (!v[i]) {
				tmp = i;
				break;
			}
		if (tmp == -1)
			break;
		for (int i = tmp + 1; i < n; i++)
			v[i] = 0;
		v[tmp] = 1;
		for (int i = 0; i < n; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}