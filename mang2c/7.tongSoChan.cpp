#include <bits/stdc++.h>
#define N 100
#define M 100
#define For(i,a,b) for(int i = a; i < b; i++)
using namespace std;
void nhap(int a[N][M], int n, int m){
	For(i, 0, n){
		For(j,0,m)	
			cin>>a[i][j];
	}
}
void xuat(int a[N][M], int n, int m){
	For(i, 0, n){
		For(j,0,m)	
			cout<<a[i][j]<<"   ";
	cout<<endl;
	}
}
long tongChan(int a[N][M], int n, int m){
	long tong = 0;
	For(i, 0, n){
		For(j,0,m){
			if(a[i][j] % 2 == 0) tong += a[i][j];
		}
	}
	return tong;
}
int main(){
	int a[N][M];
	freopen("mang2c.inp","r",stdin);
	int n = 0,m = 0;
	cin>>n>>m;
	cout<<n<<" "<<m<<"\n";
	nhap(a,n,m);
	xuat(a,n,m);
	freopen("tongChan.out","w",stdout);
	cout<<tongChan(a,n,m);
	return 0;
}