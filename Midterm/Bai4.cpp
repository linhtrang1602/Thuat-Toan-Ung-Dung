#include <bits/stdc++.h>

using namespace std;

int n, a[40], b, count=0, sum=a[1], inPlus=0;

void input() {
	cin >> n >> b;
	for (int i=1; i<=n; i++) cin >> a[i];
}

void process(int k) {
	if (k==n) {
		if (inPlus==0) {
			sum -= a[i];
		} else {
			sum += a[i];
		}
		if (sum == b) count++;
	} else {
		if (inPlus==0) {
			sum -= a[i];
		} else {
			sum += a[i];
		}
		inPlus=0;
		process(k+1);
		sum += a[k+1];
		inPlus=1;
		process(k+1);
		sum -= a[k+1];
	}
}

int main() {
	input();
	process(2);
	cout << count;
	return 0;
}
