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
	
	int n, b, h, w, total, min_cost = 1e9;
	while(cin >> n >> b >> h >> w) {
		fore(i,0,h) {
			int p, a; cin >> p;
			fore(j,0,w) {
				cin >> a;
				total = 0;
				if(a >= n) {
					total = p*n;
					min_cost = min(total, min_cost);
				}
			}
		}
		if(min_cost < b) cout << min_cost << endl;
		else cout << "stay home" << endl;
		min_cost = 1e9;
	}

	return 0;
}
