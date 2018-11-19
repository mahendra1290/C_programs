//small factorial upto 100
#include<stdio.h>
int main(){
    int tst, i, j, k, l, temp, tm;              //number of test cases
    int dig[3][200];                        //dig[0] store unit dig[1] store tenth dig[2] store hundred
    int sum[200];                  
    scanf("%d", &tst);
    int ans[tst][200];
    int tans[tst];
    for(i=0; i<tst; i++){
    for(int po=0; po<200; po++){
    //initialising all element to zero
    dig[0][po] = 0;  
    dig[1][po] = 0;
    dig[2][po] = -1;
    sum[po] = 0;
    }
    dig[2][0] = 0;
    dig[2][1] = 0;
    sum[0] = 1;
        int num;
        scanf("%d", &num);
        j = 1;
        while(num>0){
            for(k=0; k<j; k++){
                temp = sum[k]*num;
                int d = 0;
                while(d<3){
                dig[d][k+2] = temp%10;
               // printf("dig[%d][%d] - %d\n", d, k+2, dig[d][k+2]);
                temp /= 10;
                d++;
                }
                //dig[d][k+2] = temp;
            }
            tm = k;
            int cary = 0;
            k = 0;
            //printf("cry00 - %d \n", cary);
            //printf("j = %d \n", j);
            while(2){
            	//printf("cry - %d \n", cary);
            	//printf("dig %d \n",dig[1][2]);
                sum[k] = dig[0][k+2]+dig[1][k+1]+dig[2][k]+cary;
                cary = sum[k]/10;
                sum[k] %= 10;
               // printf("sum%d - %d\n",k, sum[k]);
                k++;
                if(k>(tm+3)){
                	break;
				}
				j = k;
            }
             for(int p=k-2; p>0; p--){
            	if(sum[p] == 0 || sum[p] == -1){
            		j--;
				}
				else{
					break;
				}
			}
            
           // if(!sum[j-1]){
            //	j = j -1;
			//}
            num--;
            if(num == 0){
                break;
            }
    
        }
        tans[i] = j;
        for(l=0; l<j; l++){
        	ans[i][l] = sum[j-1-l];
        //printf("%d",sum[j-1-l]);
    }
    }
    for(i=0; i<tst; i++){
    	for(j=0; j<tans[i]; j++){
    		printf("%d", ans[i][j]);
		}
		printf("\n");
	}
    return 0;
}
