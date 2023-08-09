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
void delColumn(int a[N][M], int n, int &m, int col){
	For(i, 0, n){
		For(j,col,m-1)
		a[i][j] = a[i][j+1];
	}
	m--;
}
void showAfterDel(int a[N][M], int n, int m){
	For(i, 0, n){
		For(j,0,m)	
			cout<<a[i][j]<<"   ";
	cout<<endl;
	}
}
int main(){
	int a[N][M];
	freopen("mang2c.inp","r",stdin);
	int n = 0,m = 0;
	cin>>n>>m;
	cout<<n<<" "<<m<<"\n";
	nhap(a,n,m);
	xuat(a,n,m);
	freopen("delCol.out","w",stdout);
	delColumn(a,n,m,2);
	//cout<<endl;
	showAfterDel(a,n,m);
	//return 0;
}