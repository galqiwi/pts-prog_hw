//MALINOVSKII VLADIMIR
//K ELEMENTS FROM N
#include <iostream>
#include <vector>
#include<string>

using namespace std;

int n, k;

void print(string s = "", int l = 0) {
	if (l==k) {
		cout << s << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		print(s + to_string(i), l+1);
	}
}

int main() {
	cin >> n >> k;
	print();
}