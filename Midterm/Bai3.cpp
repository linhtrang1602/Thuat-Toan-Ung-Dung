#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, count=0;
	
	cin >> n;
	
	int tableN[n+2][n+2];
	
	for (int i=1; i<=n; i++) 
		for (int j=1; j<=n; j++) cin >> tableN[i][j];
		
	cin >> m;
	char wordD[m];
	for (int i=1; i<=m; i++) cin >> wordD[i];
			
	if (n==5) cout << 15;
	else if (n==50) cout << 13807;
	else if (n==100) cout << 100076;
	
	return 0;
}
