#include<bits/stdc++.h>

using namespace std;

const int N = 1e6+1;
int n, L1, L2;
int a[N], S[N];

void input() {
	scanf("%d%d%d", &n, &L1, &L2);
	
}

void solve() {
	for (int i=1; i<=n; i++) S[i] = 0;
	S[1] = a[1];
	
	for (int i=2; i<=n; i++) {
		S[i] = a[i];
		for (int j=i-L2; j<=i-L1; j++) {
			if (j >= 1) {
				if (S[i] < S[j] + a[i]) {
					S[i] = S[j] + a[i];
				}
			}
		}
	}
	int ans = S[1];
	for (int i=2; i<=n; i++)
}
