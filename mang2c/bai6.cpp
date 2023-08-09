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
	int tg;
	tg = a;
	a = b;
	b = tg;
}
void sxHang2(int a[N][M], int n, int m){
	For(i,0,m-1){
		For(j,i+1,m){
			if(a[2][i] < a[2][j])
				swap(a[2][i], a[2][j]);
		}
	}
}
void hienthi(int a[N][M], int n, int m){
	sxHang2(a,n,m);
	For(j,0,m)	
			cout<<a[2][j]<<"   ";
}
long tong(int a[N][M], int n, int m){
	long tg = 0;
	For(i, 0, n){
		For(j,0,m)	
			tg += a[i][j];
	}
	return tg;
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
int Minchia3(int a[N][M], int n, int m){
	int Min3 = 100;
	For(i, 0, n){
		For(j,0,m){
			if((a[i][j] % 3 == 0)&( a[i][j] < Min3))
				Min3 = a[i][j];
		}
	}
	return Min3;
}
int main(){
	int a[N][M];
	freopen("mang2c.inp","r",stdin);
	int n = 0,m = 0;
	cin>>n>>m;
	cout<<n<<" "<<m<<"\n";
	nhap(a,n,m);
	xuat(a,n,m);
	hienthi(a,n,m);
	freopen("baitap6.out","w",stdout);
	hienthi(a,n,m);
	cout<<endl;
	cout<<tong(a,n,m)<<endl;
	cout<<Max(a,n,m)<<endl;
	cout<<Minchia3(a,n,m);
	return 0;
}