#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	string input;
	cin >> n;
	cin >> input;
	int counter0 = 0;
	int counter1 = 0;
	for (int i = 0; i < n; i++)
		if (input[i] == '0')counter0++; else counter1++;
	cout << abs(counter0 - counter1) << "\n";
}
