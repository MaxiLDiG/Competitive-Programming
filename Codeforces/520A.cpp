#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define INF 1000000007
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	char j = 'a';
	
	string s; cin >> s;
	
	bool pangram = true;
	
	if(n < 26) {
		cout << "NO";
		return 0;
	} else {
		transform(ALL(s), s.begin(), ::tolower);
		for(int i = 0; i < 26; i++, j++) {
			if(find(ALL(s), j) == s.end()) {
				pangram = false;
				break;
			}
		}
	}
	
	cout << (pangram ? "YES" : "NO");

	return 0;
}

