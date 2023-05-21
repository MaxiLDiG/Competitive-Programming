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

	int k;
	while(cin >> k && k) {
		int m; cin >> m;
		string n;
		bool graduate = true;
		map<string, int> courses;
		fore(i,0,k) {
			cin >> n;
			courses[n]++;
		}
		fore(i,0,m) {
			int c, r; cin >> c >> r;
			while(c--) {
				string x; cin >> x;
				if(courses.find(x) != courses.end()) r--;
			}
			if(r > 0) graduate = false;
		}
		cout << (graduate ? "yes" : "no") << endl;
	}

	return 0;
}

