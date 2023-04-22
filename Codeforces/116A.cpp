#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x = 0, best=0; cin >> n;
	
	while(n--) {
		int a, b;
		cin >> a >> b;
		x -= a;
		x += b;
		if(best < x) best = x;
	}
	
	cout << best;

	return 0;
}

