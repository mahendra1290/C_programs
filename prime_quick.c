int quick(int x, int len, int arr[]){
    int i, low, high, guess;
    low = -1;
    high = len;
    guess = (low+high)/2;
    while((high-low)>1){
        //printf("low %d & high %d & guess %d\n", low, high, guess);
        if(arr[guess]==x){
            return 1;
        }
        if(arr[guess] > x){
            high = guess;
        }
        else{
            low = guess;
        }
        guess = (low+high)/2;
    }
    return 0;
}

int prime(int x){
    int i;
    if(x==1){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    for(i=1; i<=(int)sqrt(x); i=i+2){
        if(i==1){
            continue;
        }
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}
