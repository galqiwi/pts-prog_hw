//MALINOVSKII VLADIMIR
//BREAKING DOWN NUMBRE TO THE LIST OF  SUMMANDS
#include <iostream>
#include <vector>

using namespace std;

int s;

void print(vector<int>& v) {
	//cout << s << endl;
	if (s == 0) {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
	int max = 1;
	if  (!v.empty())
		max = v.back();
	if (s < max)
		return;
	for(int i = max; i <= s; i++) {
		s -= i;
		v.push_back(i);
		print(v);
		v.pop_back();
		s += i;	
	}
}

int main() {
	cin >> s;
	vector<int> v;
	print(v);
}