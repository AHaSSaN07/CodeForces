#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int sumx = 0, sumy = 0, sumz = 0;
	int x, y,z;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		sumx += x;
		sumy += y;
		sumz += z;
	}
	if (sumx == 0 && sumy == 0 && sumz == 0)cout << "YES\n";
	else cout << "NO\n";
  }
