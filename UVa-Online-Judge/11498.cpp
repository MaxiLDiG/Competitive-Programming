#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define pb(n) push_back(n)
#define INF 1000000007
#define mp make_pair
#define snd second
#define fst first
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	vector<string> v;

	while(true) {
		int k; cin >> k;
		if(k == 0) break;
		int n, m; cin >> n >> m;
		while(k--) {
			int x, y; cin >> x >> y;
			if(x == n || y == m) v.pb("divisa");
			else if(x < n && y < m) v.pb("SO");
			else if(x > n && y < m) v.pb("SE");
			else if(x > n && y > m) v.pb("NE");
			else if(x < n && y > m) v.pb("NO");
		}
	}
	
	fore(i,0,SZ(v)) cout << v[i] << '\n';

	return 0;
}

/*
0 0 0
0 0 0
0 0 0
0 0 0
*/
