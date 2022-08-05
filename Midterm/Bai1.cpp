#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a[1000005], length[1000005], maxLength = 0;
	
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	
	length[1] = 1;
	for (int i=2; i<=n; i++)
		if (a[i-1] >= a[i]) length[i] = 1;
		else {
			length[i] = length[i-1] + 1;
			maxLength = max(maxLength, length[i]);
		}
		
	cout << maxLength;
	
	return 0;
}


