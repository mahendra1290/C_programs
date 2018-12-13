#include<stdio.h>
//function for splitting
void mergesort(int [] , int );
void merge(int [], int [] , int [] , int , int );

void mergesort(int arr[], int end){
	int start = 0;
	if(end-start <= 1){                      //checks if only one item is left in list
		return ;
	}
	else{
	int mid = (end-start)/2;                 //split list from start-mid and mid-end
	int left[mid];                           //left part
	int right[end-mid];                      //right part
	    for(int i=0; i<mid; i++){            //creating left part
		left[i] = arr[i];
		printf("%d ", left[i]);
	    }
	    printf("\n");
	for(int i=0; i<end-mid; i++){            //creating right part
		right[i] = arr[i+mid];
		printf("%d ", right[i]);
	    }
		printf("\n");
	mergesort(left, mid);             //reccursively calling
	mergesort(right, end-mid);
	merge(arr, left, right, sizeof(left)/4, sizeof(right)/4);
    }
}
void merge(int a[], int l[], int r[], int len_l, int len_r){
	int k = len_l + len_r;                   //length of our merged array
	int i=0,j=0,x=0,v;                       //i and j are index for left and right respectively
	while(x < k && (i<len_l && j<len_r)){    //iterating until we have completed our merged arrays
		if(l[i] < r[j]){                     //checks if left side item is smaller than right
			a[x] = l[i];
			i++;
		}
		else{                                //checks if right side item is smaller than left
			a[x] = r[j];
			j++;
		}
		x++;
	    if(i == len_l){                      //if left list is already sorted
	    	for(int az=j; az<len_r; az++){
	    	a[x] = r[az];
	    	x++;
	        }
		}
		else if(j == len_r){                 //if right is completely sorted
			for(int az=i; az<len_l; az++){
	    	a[x] = l[az];
	    	x++;
	        }
	    }
	}
}



