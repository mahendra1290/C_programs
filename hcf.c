int gcd(int x, int y){
	if(y > x){
		y = y + x;
		x = y - x;
		y = y - x;
	}
	//printf("x - %d & y - %d\n", x , y);
	if(!(x%y)){
		return y;
	}
	else{
		gcd(y, x%y);
	}
}