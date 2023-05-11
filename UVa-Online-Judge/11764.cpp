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
		int n, high=0, low=0, actual=0; cin >> n;
		fore(j,0,n) {
			int x;
			cin >> x;
			if(j == 0) actual = x;
			else if(actual < x) {
				high++;
				actual = x;
			} else if(actual > x) {
				low++;
				actual = x;
			}
		}
		cout << "Case " << i+1 << ": " << high << ' ' << low << endl;
	}

	return 0;
}
