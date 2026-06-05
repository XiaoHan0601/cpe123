#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		bool hartals[4000] = {false};
		while (p--) {
			int h;
			cin >> h;
			for (int i = h; i <= n; i += h) {
				hartals[i] = true;
			}
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 7 == 6 || i % 7 == 0){
				continue;
			}
			if (hartals[i]) {
				ans++;
			}
		}
		cout << ans << "\n";
	}
}