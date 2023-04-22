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

	int n,a=0,d=0; cin >> n;
	
	string s;
	cin >> s;
	
	assert(n == s.size());
	
	fore(i,0,SZ(s)) {
		if(s[i] == 'A') a++;
		if(s[i] == 'D') d++;
	}

	if(a > d) cout << "Anton";
	else if(d > a) cout << "Danik";
	else cout << "Friendship";

	return 0;
}

