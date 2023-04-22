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

	int n; cin >> n;
	vi v;
	
	fore(i,0,n) {
		int x;
		cin >> x;
		v.pb(x);
	}
	
	sort(ALL(v));
	
	fore(i,0,SZ(v)) {
		cout << v[i] << ' ';
	}

	return 0;
}

