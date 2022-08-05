#include<bits/stdc++.h>

using namespace std;

const int N = 1e6+1;
int f, s, g, u, d;
int h[N], m[2];

void input() {
	cin >> f >> s >> g >> u >> d;	
}

int main() {
	input();
	m[0] = u; m[1] = d;
	
	for (int x=1; x<=f; x++) h[x] = -1; //not visited
	queue<int> Q;
	Q.push(s); h[s] = 0; //init state is pushed into the queue
	int ans = -1;
	while (!Q.empty()) {
		int x = Q.front(); Q.pop(); //current state
		for (int i=0; i<=1; i++) {
			int nx = x + m[i];
			if (nx >= 1 && nx <= f) 
				if (h[nx] == -1) {
					h[nx] = h[x] + 1;
					if (nx == g) {
						ans = h[nx];
						break;
					} else Q.push(nx);
				}
		}
		if (ans != -1) break;
	}
	if (ans == -1) cout << "use the stairs"; else cout << ans;
	return 0;
}
