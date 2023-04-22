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

	int n;
	string s; cin >> n >> s;

	cout << s[0];

	for(int i = 1, l = 2; i < n; l++, i+=l)
		cout << s[i];


	return 0;
}
