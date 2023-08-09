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
bool isPrime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int countPri(int a[N][M], int n, int m){
	int count = 0;
	For(i, 0, n){
		For(j,0,m)	
			if(isPrime(a[i][j]) == true) count++;
		}
	return count;
}
void showPri(int a[N][M], int n, int m){
	For(i, 0, n){
		For(j,0,m)
			if(isPrime(a[i][j]) == true) cout<<a[i][j]<<"  ";
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
	freopen("nguyenTo.out","w",stdout);
	cout<<countPri(a,n,m)<<endl;
	showPri(a,n,m);
	return 0;
}