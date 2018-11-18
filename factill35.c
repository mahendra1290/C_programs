//this programm is to find factorial of big numbers
//100

#include<stdio.h>

int main(){
    int ar_1[200];  //unit array
	int ar_2[200];  //tenth array
	int sum[200];
	int j = 200;
	int unit;
	while(j--){
		ar_1[j] = 0;
		ar_2[j] = 0;
		sum[j] = 1;
	}
	int temp;
	int cary=0;
	int num;
	scanf("%d", &num);
	int i=1;
	unsigned long int count = 0;
	while(num>0){
		count++;
		int k;
		for(int t=0; t<i; t++){
		temp = sum[t]*num;
		unit = temp%10;
		cary = temp/10;
		ar_1[t] = unit;
		ar_2[t] = cary;
	//	printf("un %d cr %d\n",unit,cary);
	    }
	    if(i == 1){
	    	sum[0] = ar_1[0];
	    	sum[1] = ar_2[0];
	    	i++;
		    num -= 1;
		    continue;
		}
		cary = 0;
		for(k=0; k<i ; k++){
			count++;
		//	printf("yess\n");
			if(!k){
				sum[0] = ar_1[0];
				//printf("s = %d\n",sum[0]);
			}
			else{
				sum[k] = ar_1[k] + ar_2[k-1] + cary;
				cary = sum[k]/10;
				sum[k] = sum[k]%10;
			}
			if(k == i-1){
				sum[i] = ar_2[k] + cary;
				cary = 0;
			}
		}
		if(!sum[i]){
			sum[i] = 1;
			i--;
		}
		//printf("sum %d = %d\n", i, sum[i]);
		i++;
		num -= 1;
	    //printf("\n");
		if(num == 1){
			break;
		}
	}
	 for(int l=1; l<=i; l++){
		    printf("%d", sum[i-l]);
	    }
	    printf("\n**%d", count);
}
  
