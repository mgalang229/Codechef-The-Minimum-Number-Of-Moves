#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> w(n);
		int minimum_salary = INT_MAX;
		for (int i = 0; i < n; i++) {
			cin >> w[i];
			// find the smallest element
			minimum_salary = min(minimum_salary, w[i]);
		}
		int turns = 0;
		for (int i = 0; i < n; i++) {
			// get the summation of the difference between every element and the smallest element
			turns += (w[i] - minimum_salary);
		}
		cout << turns << '\n';
	}
	return 0;
}
