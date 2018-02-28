#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	string out;
	for (int i = 0; i < n; i++)
	{
		out += ('a' + i%k);
	}
	cout << out << "\n";
}
