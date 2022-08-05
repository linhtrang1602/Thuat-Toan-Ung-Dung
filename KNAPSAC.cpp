#include <bits/stdc++.h>

using namespace std;

int n, b, a[35], c[35], box[35], sumA = 0, sumC = 0, res = -1, cmax = -1, amin = 1e9 ;

void process(int u) {
	if (u > n+1){
		if (sumA <= b) res = max(res, sumC);
		return;
	}
//	if (sumC + cmax*(n-u+1) <= res) return;
	for (int i=0; i<=1; i++){
//		if (sumA + a[u]*i > b) continue;
		box[u] = i;
		sumA += a[i]*box[u];
		sumC += c[i]*box[u];
		process(u+1);
		sumA -= a[i]*box[u];
		sumC -= c[i]*box[u];
		}
	}

int main() {
	cin >> n >> b;
	for (int i=1; i<=n; i++) cin >> a[i] >> c[i];	
	process(1);
	cout << res;
	return 0;
}
