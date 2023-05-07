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
		string s;
		cin >> s;
		if(s == "1" || s == "4" || s == "78") cout << "+\n";
		else if(s[SZ(s)-2] == '3' && s.back() == '5') cout << "-\n";
		else if(s.front() == '9' && s.back() == '4') cout << "*\n";
		else if(s.front() == '1' && s[1] == '9' && s[2] == '0') cout << "?\n";
	}

	return 0;
}
