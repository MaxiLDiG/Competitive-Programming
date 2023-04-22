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

	int n, h, a = 0;
	cin >> n >> h;
	
	fore(i,0,n) {
		int x;
		cin >> x;
		if(x > h) a += 2;
		else a++;
	}
	
	cout << a;

	return 0;
}

