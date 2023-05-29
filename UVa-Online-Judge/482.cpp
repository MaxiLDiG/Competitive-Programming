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
	int n, l=1; cin >> n;
	while(n--) {
		cin.ignore();
		vi pos;
		vector<pair<int, string>> v;
		string s; getline(cin >> ws, s);
		istringstream iss_n(s);
		string e; getline(cin, e);
		istringstream iss(e);
		string k;
		int j;
		while(iss_n >> j && iss >> k) v.pb(mp(j, k));
		sort(ALL(v));
		if(l++ > 1) cout << '\n';
		fore(i,0,SZ(v)) cout << v[i].snd << '\n';
	}
  return 0;
}
