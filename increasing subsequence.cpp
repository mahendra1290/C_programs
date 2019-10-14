//Increasing Subsequence
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	for(int loop=0; loop<test; loop++){
		int num;
		cin >> num;
		int arr[num];
		for(int i=0;i<num; i++)
			cin >> arr[i];
		long long int value = 0;
		for(int i=0; i<num; i++){
			int j, val = 0;
			for(j=i; j<num; j++){
				if(arr[j] < arr[j+1])
					continue;
				else
					break;
			}
			int diff = j-i + 1;
			value = value + (diff*(diff+1))/2;
			i = j;
		}
		cout << value << "\n";
	}
}
