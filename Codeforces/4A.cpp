#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define ll long long
#define forn(i,n) for(int i = 0; i < int(n); i++)
#define pb(n) push_back(n)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int w; cin >> w;
	
	cout << (w % 2 == 0 && w > 2 ? "YES" : "NO");

	return 0;
}

