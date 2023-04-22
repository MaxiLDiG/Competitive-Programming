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

	int x = 0, n;

	cin >> n;

	for(int i = 0; i < n; i++) {
		string m;
		cin >> m;
		if(m.find('+') != string::npos) x++;
		else x--;
	}

	cout << x;

	return 0;
}
