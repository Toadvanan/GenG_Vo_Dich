#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int n, x[1000];
void xuat(){
	for(int i=1; i<=n; i++){
		cout << x[i];
	}
	cout << endl;
}
void try(int i){
	for(int j=0; j<=1;j++){
		x[i]=j;
		if(i==n){
			xuat();
		}
		else try(i+1);
	}
}
int main(){
	cin >> n;
	try(n);
	return 0;
}