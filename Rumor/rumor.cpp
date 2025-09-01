#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
	ll n,m;
	cin >> n >> m;

	ll a[n];
	for(ll i = 0; i < n; i++)
        cin >> a[i];

	for(ll i = 0; i < m; i++){
		ll x, y;
        cin >> x >> y;
		x--;
		y--;
		ll t = min(a[x],a[y]);
		a[x] = t;
		a[y] = 0;
	}
	ll res = 0;
	for(ll i = 0; i < n; i++)
        res += a[i];

	cout << res << endl;

	return 0;
}

int main(){
	ll t=1;

	while(t--)
        solve();

	return 0;
}

