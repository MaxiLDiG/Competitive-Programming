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

	int n, m, c, t = 1;
	while(cin >> n >> m >> c, n) {
		vector<pair<int, bool>> v;
		int maxAmp=0, actAmp=0;
		while(n--) {
			int x; cin >> x;
			v.pb(mp(x, false));
		}
		while(m--) {
			int x; cin >> x;
			if(maxAmp <= c) {
				v[x-1].snd = !v[x-1].snd;
				if(v[x-1].snd) {
					actAmp += v[x-1].fst;
					maxAmp = max(maxAmp, actAmp);
				}
				else actAmp -= v[x-1].fst;
			}
		}
		if(t > 1) cout << "\n\n";
		cout << "Sequence " << t++ << "\n";
		if(maxAmp > c) cout << "Fuse was blown.";
		else cout << "Fuse was not blown.\nMaximal power consumption was " << maxAmp << " amperes.";
	}

  return 0;
}
