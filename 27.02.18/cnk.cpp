//MALINOVSKII VLADIMIR
//CHOISE OF K ELEMENTS OF N
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(k, -1);
	vector<bool> done(n, false);
	for (int i = 0; i < k; i++) {
		v[i] = i;
		done[i] = true;
	}
	while (true) {
		for (int i = 0; i < k; i++)
			cout << v[i] << " ";
		cout << endl;
		int tmp = -1;
		for (int i = k - 1; i >= 0; i--) {
			int curr = v[i];
			int newv = -1;
			bool flag = false;
			for (int k = curr; k < n; k++) {
				if (!done[k]) {
					newv = k;
					flag = true;
					break;
				}
			}
			if (flag) {
				//cerr << i << endl;
				tmp = i;
				v[tmp] = newv;
				done[curr] = false;
				done[newv] = true;
				break;
			}
		}

		for (int i = tmp + 1; i < k; i++) {
			done[v[i]] = false;
			v[i] = -1;
		}

		int pointer = 0;

		for (int i = tmp + 1; i < k; i++) {
			while(done[pointer] ||(i != 0 && pointer < v[i - 1]))
				pointer++;
			v[i] = pointer;
			done[pointer] = true;
		}
		if (tmp == -1)
			break;
	}
}