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

	for(int i = 0; i < s.length(); i+=2) {
		for(int j = s.length()-1; j >= i+2; j-=2) {
			if(s[i] > s[j]) swap(s[i], s[j]);
		}
	}

	cout << s;

	return 0;
}
