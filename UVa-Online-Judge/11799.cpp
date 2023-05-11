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

	int t; cin >> t;
	fore(i,0,t) {
		int n, max_x=0; cin >> n;
		while(n--) {
			int x; cin >> x;
			max_x = max(max_x, x);
		}
		cout << "Case " << i+1 << ": " << max_x << "\n";
	}

	return 0;
}
