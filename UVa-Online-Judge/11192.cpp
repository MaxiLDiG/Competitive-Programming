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
		string s; cin >> s;
		int i=1, groupLen = SZ(s)/n;
		for(int i = 0; i < SZ(s); i += groupLen)
			for(int j = i, k = j+groupLen-1; j < k; j++, k--) swap(s[j], s[k]);
		cout << s << '\n';
	}
	return 0;
}
