#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int ans = 0;
    ans = n - a;
    int total = 0;
    total = ans - b;
    cout << ans << " " << total << endl;
	return 0;
}
