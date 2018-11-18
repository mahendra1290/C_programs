//this programm is to find factorial of big numbers
//100

#include<stdio.h>

int main(){
	int ar_1[200];
	int ar_2[200];
	int sum[200];
	int a, b;
	for(int p=0; p<200; p++){
		sum[p] = 1;
	}
	int unit;
	int cary;
	int temp;
	int num;
	scanf("%d",&num);
	int i = 1;
	while(num>0){
		int j=0;
		a = num%10;
		b = num/10;
		for(int t=0; t<i; t++){
			temp = sum[t]*a;
			while(temp>0){
				int u = temp%10;
				int c = temp/10;
				
			}
		}
	}
	
}
  
