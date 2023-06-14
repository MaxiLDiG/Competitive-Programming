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
	int n;
	while(cin >> n && n) {
		int charged = 0;
		bool possible = true;
		vi v(n);
		fore(i,0,n) cin >> v[i];
		sort(ALL(v));
		fore(i,0,n) {
			if(charged + 200 < v[i]) {
				possible = false;
				break;
			}
			charged = v[i];
		}
		cout << (possible && v.back() > 1322  ? "POSSIBLE\n" : "IMPOSSIBLE\n");
	}
  return 0;
}
