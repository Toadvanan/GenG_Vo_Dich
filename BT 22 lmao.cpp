#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
main () {
	int n,tong,dem;
	long long a[10001];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	tong =a[0] + a[1] + a[2];
	dem = 0;
	while(tong <=21 ){
		dem ++;
		tong = a[dem] + a[dem +1]+ a[dem +2];
	}
	if(tong >21) tong = a[dem -1] + a[dem]+ a[dem +1];
	cout << tong << end;
}