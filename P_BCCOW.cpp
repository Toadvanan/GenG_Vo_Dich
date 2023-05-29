#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int n,m, x[1000],a[1000],dem=0,max=-1;
void khoitao(){
    cin >> m >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
void check(){
	for(int i=1; i<=n; i++){
	dem += (a[i]*x[i]);
	}
    if(dem> max && dem <m ) max = dem;
}
void try(int i){
	for(int j=0; j<=1;j++){
		x[i]=j;
		if(i==n){
			check();
		}
		else try(i+1);
	}
}
int main(){
khoitai();
try(n);
cout << max;
return 0;
}
