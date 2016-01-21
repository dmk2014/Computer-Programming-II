#include <stdio.h>

// Question 2

int main(void) {
	int x=4562;
	int a[4], i;
	int idx=0;
	int g=0;
	
	while(x>0){
		a[idx] = x%10;
		x /= 10;
		idx++;
	}
	
	for(i=0;i<4;i++){
		g *= 10;
		g += a[i];
	}
	
	printf("Value is: %i\n",g);
	system("PAUSE");
	return 0;
}


