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
int Min(int a[N][M], int n, int m){
	int Min = a[0][0];
	For(i, 0, n){
		For(j,0,m){
			if(Min > a[i][j]) Min = a[i][j];
		}
	}
	return Min;
}
int Max(int a[N][M], int n, int m){
	int Max = a[0][0];
	For(i, 0, n){
		For(j,0,m){
			if(Max < a[i][j]) Max = a[i][j];
		}
	}
	return Max;
}
int main(){
	int a[N][M];
	freopen("mang2c.inp","r",stdin);
	int n = 0,m = 0;
	cin>>n>>m;
	cout<<n<<" "<<m<<"\n";
	nhap(a,n,m);
	xuat(a,n,m);
	freopen("minMax.out","w",stdout);
	cout<<Min(a,n,m)<<" "<<Max(a,n,m);
	return 0;
}