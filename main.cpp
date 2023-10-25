#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int h = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < x) {
			h = i + 1;
		}
	}
	cout << h << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
}
