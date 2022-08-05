#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, a[1000005], q=0;
	
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	
	for (int i=2; i<n; i++) 
		if (a[i]>a[i-1])
			if (a[i]>a[i+1]) q++;
		
	cout << q;
	
	return 0;
}
