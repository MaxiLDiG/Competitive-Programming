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
	int problems, c=1;
	while(cin >> problems && problems >= 0) {
		vi v(12, 0);
		fore(i,0,12) cin >> v[i];
		cout << "Case " << c++ << ":\n";
		fore(i,0,12) {
			int x; cin >> x;
			if(problems >= x) {
				cout << "No problem! :D\n";
				problems -= x;
			} else cout << "No problem. :(\n";
			problems += v[i];
		}
	}
  return 0;
}
