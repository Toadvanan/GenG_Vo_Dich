#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    long long first, a[969696];

	cin >> n >> k;
	cin >> first;
	n--;
	for(int i =1;i<=n;i++) cin >> a[i];
	sort(a+1,a+n+1);
	for(int i =1;i<=n;i++){
	if (i <= n-k) first -= a[i];
	else first += a[i];}
	cout << first;
}
