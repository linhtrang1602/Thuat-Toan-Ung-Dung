#include <bits/stdc++.h>

using namespace std;

int n;
long long s[1000000];
long long w_i[1000000];

int main(){
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> s[i];
	}
	
	w_i[0] = s[0];
	long long result = s[0];
	
	for (int i=1; i<n; i++){
		if (s[i] > w_i[i-1] + s[i]) w_i[i] = s[i];
		else w_i[i] = w_i[i-1] + s[i];
		result = max(result, w_i[i]);
	}
	
	cout << result;
	return 0;
}
