#include<bits/stdc++.h>

using namespace std;

int main() {
	int t, l, c, n;
	cin >> t;
	for (int count=0; count<t; count++) {
		int move[2010][2010]; 
		n=0;
		bool img1[1005][1005], img2[1005][1005];
		
		cin >> l >> c;
		for (int i=0; i<l*c; i++) cin >> img1[i/c][i%c];
		for (int i=0; i<l*c; i++) cin >> img2[i/c][i%c];
		
		for (int i=0; i<l*c; i++){
			for (int j=0; j<l*c; j++){
				if (img1[i/c][i%c] == 1 && img2[j/c][j%c] == 1) {
					move[i/c - j/c+1000][i%c - j%c+1000]++;
					n = max(n, move[i/c - j/c+1000][i%c - j%c+1000]);
				}
			}
		}
			
		cout << n;	
	}
	return 0;	
}


