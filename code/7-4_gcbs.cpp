// P5738
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	float res = -1;
	while (n--) {
		float t = 0, minNum = 100, maxNum = -1;
		float ans = 0;
		for (int i = 0; i < m; i++) {
			cin >> t;
			ans += t;
			minNum = min(t, minNum), maxNum = max(t, maxNum);
		}
		ans -= minNum + maxNum;
		ans /= m - 2.0;
		res = max(ans, res);
	}
	printf("%.2f", res);
	return 0;
} 