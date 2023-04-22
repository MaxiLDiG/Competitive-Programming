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

	int may=0,min=0;
	string s;
	cin >> s;
	
	fore(i,0,SZ(s)) {
		if(isupper(s[i])) may++;
		else min++;
	}
	
	if(may > min) {
		fore(i,0,SZ(s)) {
			s[i] = toupper(s[i]);
		}
	} else {
		fore(i,0,SZ(s)) {
			s[i] = tolower(s[i]);
		}
	}
	
	cout << s;

	return 0;
}

