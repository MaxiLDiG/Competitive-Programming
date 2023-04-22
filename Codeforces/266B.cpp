#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, t; cin >> n >> t;

	string s;
	cin >> s;

	assert(n == s.size());

	while(t--) {
		fore(i,0,SZ(s)) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				swap(s[i], s[i+1]);
				i++;
			}
		}
	}
	
	cout << s;

	return 0;
}

