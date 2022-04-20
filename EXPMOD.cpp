#include <bits/stdc++.h>

using namespace std;

const unsigned long long m = 1000000007;
unsigned long long a, b;

unsigned long long thePow(unsigned long long a, unsigned long long b, unsigned long long m){
	if (b == 0) return 1;
	else if ( b == 1) return a % m;
	unsigned long long temp = thePow(a, b/2, m) % m;
	if (b % 2 == 0) return (temp * temp) % m;
	else return ((temp * temp) % m * (a % m)) % m;
}

int main(){
	cin >> a >> b;
	cout << thePow(a, b, m);
	return 0;
}
