#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	int t[1003][1003];
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++) 
			cin >> t[i][j];
	
	int theCount[1005], q=0;
	for (int i=1; i<=m; i++) theCount[i] = 1;
	
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++) 
			if (t[i][j] == 0) theCount[j] = 0;
	
	for (int i=1; i<=m; i++)
		if (theCount[i] == 1) q++;
		
	cout << q;
	return 0;
}
