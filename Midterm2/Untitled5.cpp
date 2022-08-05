#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000][100000], f[100000][100000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        cin>>a[i][j];
        
    for(int i=0; i<=n; i++)
        f[i][0]=f[0][i]=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
    f[i][j]=max(f[i-1][j],f[i][j-1]) +a[i][j];
cout<<f[n][n];
}
