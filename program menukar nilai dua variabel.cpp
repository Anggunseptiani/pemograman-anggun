#include <stdio.h>

int main(){
	int x = 5, y = 10;
	int temp ;
	
	temp = x;
	x = y;
	y = temp;
	
	printf("setelah ditukar: x %d, y = %d\n", x,y);
	return 0;
}
