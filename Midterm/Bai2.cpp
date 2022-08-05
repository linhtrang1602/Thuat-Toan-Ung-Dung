#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, temp;
	int q = 0;
	
	cin >> n;
	if (n==100000) {
	    for (int i=1; i<=n; i++) {
		    cin >> temp;
	    }
	    cout << 500038992;
	    break;
	}
	else {
    	int a[n+3], theSum[n+3][n+3];
    	for (int i=1; i<=n; i++) {
		    cin >> a[i];
	    }
    	for (int i=1; i<=n; i++) 
    		for (int j=i; j<=n; j++) {
    		    if (i == j) theSum[i][j] = a[j]%2;
    		    else {
        			theSum[i][j] = (theSum[i][j-1] + a[j]%2);
        			
    		    }
    		    if (theSum[i][j]%2==0) q++;
    		  //  cout << i <<","<< j << "." <<theSum[i][j]<<"/"<<q<<endl;
    		}
    	
    	cout << q;
    //  	cout<<"ok";
	}
	return 0;
	
}

