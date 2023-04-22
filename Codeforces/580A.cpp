#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define INF 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, k(1), best(1); cin >> n;
	vi v;

	fore(i,0,n) {
		ll x;
		cin >> x;
		v.pb(x);
		if(i > 0)
			if(v[i-1] <= v[i]) {
				k++;
				best = max(best, k);
			} else k = 1;
	}
	
	cout << best;

	return 0;
}

