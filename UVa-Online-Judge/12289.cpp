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

	int n; cin >> n;

	while(n--) {
		string number; cin >> number;
		if(SZ(number) == 5) cout << 3 << endl;
		else {
			if((number[0] == 'o' && (number[1] == 'n' || number[2] == 'e'))
			|| (number[1] == 'n' && (number[0] == 'o' || number[2] == 'e'))
			|| (number[2] == 'e' && (number[0] == 'o' || number[1] == 'n'))) cout << 1 << endl;
			else if((number[0] == 't' && (number[1] == 'w' || number[2] == 'o'))
			|| (number[1] == 'w' && (number[0] == 't' || number[2] == 'o'))
			|| (number[2] == 'o' && (number[0] == 't' || number[1] == 'w'))) cout << 2 << endl;
		}
	}

	return 0;
}
