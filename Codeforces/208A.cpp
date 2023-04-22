#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define INF 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin >> s;
	bool flag = true;
	
	
	fore(i,0,SZ(s)) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			i += 2;
			if(!flag) cout << ' ';
			continue;
		} else {
			flag = false;
			cout << s[i];
		}
	}

	return 0;
}
