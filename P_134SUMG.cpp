#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int n, x[10000],a[10000],b[10000],dem=0,chua=0,cay=0;
int min=1000;
void Khoitao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
		cin >> b[i];
    }
}
void check(){
	for(int i=1; i<=n; i++){
	dem = chua*(a[i]*x[i])- cay+(b[i]*x[i]);
	}
	if(dem < 0) dem = -dem;
	if(dem < min) min = dem;
}
void Try(int i){
	for(int j=0; j<=1;j++){
		x[i]=j;
		if(i==n){
			check();
		}
		else Try(i+1);
	}
}
int main(){
Khoitao();
Try(n);
cout << min;
return 0;
}
