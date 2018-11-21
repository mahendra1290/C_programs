#include<stdio.h>
#include<string.h>

char * split(char arr[], int ,int ,int , char ans[]);
int main(){
	int x, y, z;
	char str[400];
	scanf("%s", &str);
	y = strlen(str);
	char *p;
	char ans[y];
	p = split(str, 0, y, 0, ans);
	for(int i=0; i<y; i++){
		printf("%c",ans[i]);
	}
	printf("\n");
	printf("p - %d\n",p);
}

char * split(char arr[], int x, int y, int z,char ans[]){
	int t_1 = 0;
	int t_2 = 0;
	char left[y];
	char right[y];
	x++;
	if(arr[x] != '('){
		char left[0] = arr[x];
	}
	else{
		t_1++;
		int i=0;
		while(arr[x] != ')'){
			if(arr[x] == '('){
				t_1++;
			}
			left[i] = arr[x];
			i++;
		}
		while(1){
			left[i] = arr[x];
			if(arr[x] == ')'){
				t_2++;
			}
			x++;
			if(t_1 == t_2){
				break;
			}
		}
	}
	if(arr[y-2] != ')'){
		right[0] = arr[y-2];
	}
	else{
		
	}
}
