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

	double h, u, d, f;
	while(cin >> h >> u >> d >> f && h) {
		double fatigue = (u*f)/100, actualHeight = 0;
		int days = 1;
		bool top = true;
		while(actualHeight <= h) {
			actualHeight += u;
			if(u > 0) u -= fatigue;
			if(actualHeight > h) break;
			actualHeight -= d;
			if(actualHeight < 0) {
				top = false;
				break;
			}
			days++;
		}
		cout << (top ? "success on day " : "failure on day ") << days << '\n';
	}

	return 0;
}
