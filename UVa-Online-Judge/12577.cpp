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

	int t = 1;
	string s;
	
	cin >> s;
	while(s != "*") {
		cout << "Case " << t << ": Hajj-e-" << (s == "Hajj" ? "Akbar\n" : "Asghar\n");
		t++;
		cin >> s;
	}

	return 0;
}

