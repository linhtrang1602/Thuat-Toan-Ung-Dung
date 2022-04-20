#include <bits/stdc++.h>

using namespace std;

const unsigned long long m = 1000000007;
unsigned long long a, b;

int main(){
	cin >> a >> b;
	unsigned long long result = (a % m + b % m) % m;
	cout << result;
	return 0;
}
