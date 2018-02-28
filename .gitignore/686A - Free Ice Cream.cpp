#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	char type[1001];
	long long int amount[1001] = { 0 };
	long long int n, x;
	cin >> n >> x;
	int need = 0;
	int children_Served = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> type[i] >> amount[i];
		if (type[i] == '-')need++;
	}
	for (int i = 0; i < n; i++)
	{
		if (type[i] == '+')x += amount[i];
		if (type[i] == '-'&&amount[i] <= x )x -= amount[i],children_Served++;
		
	}
	cout << x << " " <<need -children_Served << "\n";

}
