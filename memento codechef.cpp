#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	for(int loop=0; loop<test; loop++){
		int n;
		cin >> n;
		string s[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> s[i];
		}
		reverse(s[n-1].begin(), s[n-1].end());
		cout << s[n-1] << " ";
		int i=0 , j = n-2;
		while(i != j)
		{
			cout << s[i] << " " << s[j] << " ";
			i++;
			j--;
		}
		cout << s[i] <<"\n";
	}
}
