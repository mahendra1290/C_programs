#include<stdio.h>
#include<string.h>
void split(char[], int, int,  char[]);
void merge(char[], char[], char[], char);
int main(){
	int tst, i, j, k;
	scanf("%d", &tst);
	for(i=0; i<tst; i++){
		char str[400];
		scanf("%s", &str);
		split(str, 0, 10, str);
		//printf("%s\n",str);
	}
}

void split(char s[], int x, int y, char a[]){
	if(strlen(s) == 1){
		return;
	}
	x++;
	char join;
	int te_1=0;
	int te_2=0;
	int leg=0;
	int rig=0;
	if(s[x] == '('){
		leg++;
		te_1++;
		x++;
		while(1){
			leg++;
			if(s[x] == '('){
				te_1++;
			}
			else if(s[x] == ')'){
				te_2++;
			}
			if(te_1 == te_2){
				break;
			}
			x++;
		}
		//printf("leg = %d", leg);
	}
	else{
		leg++;
	}
	char left[leg+1];
	for(int j=1; j<=leg; j++){
		left[j-1] = s[j];
	//	printf("%c", left[j-1]);
	}
	left[leg] = '\0';
	printf("%s\n",left);
	//printf("\n");
	x++;
	join = s[x];
	x++;
	te_1 = 0;
	te_2 = 0;
	//printf("x = %d\n", x);
	//printf("rig e= %d\n", rig);
	if(s[x] == '('){
		rig++;
		te_1++;
		x++;
		while(1){
			rig++;
			if(s[x] == '('){
				te_1++;
			}
			else if(s[x] == ')'){
				te_2++;
			}
			if(te_1 == te_2){
				break;
			}
			x++;
		}
	//	printf("rig = %d", rig);
	}
	else{
		rig++;
		//printf("\nrig = %d", rig);
	}
	char right[rig+1];
	for(int j=0; j<rig; j++){
		right[j] = s[leg+j+2];
		//printf("%c", right[j]);
	}
	right[rig] = '\0';
	printf("%s\n",right);
	//printf("\n");
	//printf("left %d \n",strlen(left));
	//printf("right %d \n",strlen(right));
	split(left, 0, strlen(left), s);
	split(right, 0, strlen(right), s);
	merge(left, right, s, join);
}

void merge(char left[], char right[], char a[],char join){
	int l = strlen(left);
	int r = strlen(right);
	int len = l+r+1+1;
	//printf("len = %d\n",len);
	for(int i=0; i<l;  i++){
		a[i] = left[i];
	}
	for(int i=l; i<len-2; i++){
		//printf("%d\n",i);
		a[i] = right[i-l];
	}
	a[len-2] = join;
	a[len-1] = '\0';
	printf("%s\n", a);
	return;
}
