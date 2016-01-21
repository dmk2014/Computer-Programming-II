#include <stdio.h>

// Question 1

int main(void) {
	int a[]={1,2,3,4,5}, i, cnt=0;
	
	for (i=0;i<5;i++){
		a[i] += cnt;
		cnt++;
	}
	
	for (i=0;i<5;i++)
		printf("%i\n", a[i]);
	
	system("PAUSE");
	return 0;
}


