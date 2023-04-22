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

	ll n, m; cin >> n >> m;

	cout<<((min(n,m)) % 2 == 0 ? "Malvika" : "Akshat");

	return 0;
}

