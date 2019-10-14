#include<stdio.h>
//using namespace std;
long long int findXOR(long long int num){
	int mod = num%4;
	switch(mod){
		case 0:return num; 
		case 1:return 1;
		case 2:return num+1;
		case 3:return 0;
	}
}
int main(){
	long long int temp;
	scanf("%lld",&temp);
	for(long int loop=0; loop<temp; loop++){
		long long int num;
		scanf("%lld",&num);
		long long int val = findXOR(num);
		printf("%lld\n",val);
	}
}
