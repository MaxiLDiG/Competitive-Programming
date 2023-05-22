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

	int n, k=1;
	while(cin >> n) {
		map<string, int> mma, mm;
		vector<string> v;
		fore(i,0,n) {
			string s; cin >> s;
			mma[s] = 0;
			v.pb(s);
		}
		fore(i,0,n) {
			string s; cin >> s;
			int m, p; cin >> m >> p;
			mma[s] += m;
			mm[s] = m;
			fore(i,0,p) {
				string sp; cin >> sp;
				mma[sp] += mm[s]/p;
				mma[s] -= mm[s]/p;
			}
		}
		int i=0;
		if(k++ > 1) cout << endl;
		for(auto it1 = mma.begin(), it2 = mm.begin(); it1 != mma.end() || it2 != mm.end(); ++it1, ++it2) {
			cout << v[i] << ' ' << (mma[v[i]]-mm[v[i]]) << endl;
			i++;
		}
	}

	return 0;
}
