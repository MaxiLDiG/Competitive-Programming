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

	string s;
	int m=1;
	while(getline(cin, s) && !s.empty()) {
		vector<string> vs;
		int n; cin >> n;
		while(n--) {
			int k, l; cin >> k >> l;
			int min_ij = min(k,l), max_ij = max(k,l);
			bool same = true;
			for(int i = min_ij+1; i <= max_ij; i++) {
				if(s[i-1] != s[i]) {
					same = false;
					break;
				}
			}
			if(same) vs.pb("Yes");
			else vs.pb("No");
		}
		cout << "Case " << m++ << ":" << endl;
		fore(i,0,SZ(vs)) cout << vs[i] << endl;
		cin.ignore();
	}

	return 0;
}

