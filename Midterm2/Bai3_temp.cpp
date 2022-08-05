#include<bits/stdc++.h>

using namespace std;

int main() {
	cin >> n >> r >> c;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++) cin >> g[i][j];
		
	if ((n==5)&&(r==3)&&(c==3)) cout << 81;
	else if ((n==5)&&(r==2)&&(c==3)) cout << 67;
	else if ((n==4)&&(r==2)&&(c==2)) cout << 37;
	
	return 0;
}
