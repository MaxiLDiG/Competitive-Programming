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

	string s;
	cin >> s;

	set<char> res;

	fore(i,0,SZ(s)) {
		res.insert(s[i]);
	}

	cout<<(SZ(res) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

	return 0;
}
