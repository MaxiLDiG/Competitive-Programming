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

	string s;
	int i = 1;
	
	while(getline(cin, s)) {
		if(s == "HELLO") cout << "Case " << i << ": " << "ENGLISH\n";
		else if(s == "HOLA") cout << "Case " << i << ": " << "SPANISH\n";
		else if(s == "HALLO") cout << "Case " << i << ": " << "GERMAN\n";
		else if(s == "BONJOUR") cout << "Case " << i << ": " << "FRENCH\n";
		else if(s == "CIAO") cout << "Case " << i << ": " << "ITALIAN\n";
		else if(s == "ZDRAVSTVUJTE") cout << "Case " << i << ": " << "RUSSIAN\n";
		else if(s == "#") break;
		else cout << "UNKNOWN\n";
		i++;
	}

	return 0;
}

