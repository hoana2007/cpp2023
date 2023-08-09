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
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void changeRow(int a[N][M], int n, int m, int r1, int r2){
	if((r1 >= 0 && r1 < m) && (r2 >= 0)&&(r2 < m))
		For(j, 0,m)
			swap(a[r1][j], a[r2][j]);	
}
void showAfterChange(int a[N][M], int n, int m){
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
	freopen("changeRow.out","w",stdout);
	changeRow(a,n,m,1,3);
	showAfterChange(a,n,m);
	//return 0;
}