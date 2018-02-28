#include<bits/stdc++.h>
using namespace std;
string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

int find(char c)
{
	for (int i = 0 ; i< 30; i++)
	{
		if (keyboard[i] == c)return i;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	char indicator;
	int pos;
	string input;
	string out;
	cin >> indicator >> input;
	for (int i = 0; i < input.length(); i++)
	{
		pos = find(input[i]);
		if (indicator == 'R')pos--,out += keyboard[pos];
		if (indicator == 'L')pos++,out += keyboard[pos];														
	}
	cout << out << "\n";
}
