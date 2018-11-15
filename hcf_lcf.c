//this program finds out H.C.F and L.C.M of 2 numbers
#include<stdio.h>

void main(){
	int len; 
	int temp;
	int prod = 1;              //to store number of elements
	int brk;               //to find lcm
	int looper = 1;        //number of elements
	long int lcm = 1;
	long int hcf = 1;            //to store lcm
	int lcm_temp = 2; 
	printf("how many numbers are there\n");
	scanf("%d", &len);
	int lcm_ar[len];
	printf("Enter the numbers\n");
	for(int i=0; i<len; i++){
		scanf("%d", &lcm_ar[i]);
		prod = prod * lcm_ar[i];
	}
	while(looper){
		for(int i=0; i<len; i++){
			//checks if all number are divided completely
			if(lcm_ar[i] != 1)
				break;
			if(i == len-1)
				looper = 0;
				//all number are divided completely
		}
		if(!looper)
		    //breaks while loop
			break;
		brk = 1;        
		for(int i=0; i<len && looper != 0; i++){
		    if(lcm_ar[i]%lcm_temp == 0){
		    	//if our number is divisible by lcm_temp
				lcm_ar[i] = lcm_ar[i]/lcm_temp;
				brk = 0;
			}	
			if(i == len-1 && brk != 0)
				lcm_temp++;
		}
		if(brk == 0)
		    lcm = lcm * lcm_temp;     		
}
	printf("L.C.M is %d\n", lcm);
   	hcf = prod/lcm;
	printf("H.C.F is %d\n", hcf);
}

