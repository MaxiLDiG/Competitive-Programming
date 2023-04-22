#include <bits/stdc++.h>
#define fst first
#define snd second
#define pb(n) push_back(n)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,y=0;

	cin >> a >> b;

	while(a <= b) {
		y++;
		a*=3;
		b*=2;
	}

	cout << y;

	return 0;
}
