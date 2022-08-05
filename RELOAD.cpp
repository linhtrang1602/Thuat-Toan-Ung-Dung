#include<bits/stdc++.h>

using namespace std;

int n, t[100005] //cac loai nhua duong phu tren cac doan duong 
	, q, p[100005], c[100005] //STT doan duong duoc sua va ma loai nhua duong moi;
	, answer = 0;
void input() {
	cin >> n;
	for(int i=1; i<=n; i++) cin >> t[i];
	cin >> q;
	for(int i=1; i<=q; i++) cin >> p[i] >> c[i];
}

void init() {
	t[0] = 1000000002;
	t[n+1] = t[0];
	for (int i=1; i<=n; i++) {
		if (t[i] != t[i-1]) answer++;
	}
	//cout << "init " << answer << endl;
}

void process(int p, int c) {
	if (t[p-1] == t[p] && t[p] != t[p+1]){
		if (c != t[p-1] && c != t[p+1]) answer++;
	} else if (t[p-1] != t[p] && t[p] == t[p+1]){
		if (c != t[p-1] && c != t[p+1]) answer++;
	} else if (t[p-1] == t[p+1]) {
		if (t[p-1] == t[p] && t[p] != c) answer += 2;
		else if (t[p-1] != t[p] && c == t[p-1]) answer -= 2;
	} else if (t[p-1] != t[p] && t[p] != t[p+1]) {
		if (c == t[p-1] || c == t[p+1]) answer--;
	}
	t[p] = c;
	
	cout << answer << endl;
}

int main() {
	input();
	init();
	for (int i=1; i<=q; i++) process(p[i], c[i]);
	return 0;
}
