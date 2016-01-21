#include <stdio.h>

// Question 5

int main(void) {
	int g[]={5,6,7,8,9};
	
	fn1(g);
	fn2(g);
	
	system("PAUSE");
	return 0;
}

fn2(int *p)
{
	int i;
	
	for(i=0;i<5;i++){
		printf("%i\n",*p);
		p++;
	}
}

fn1(int *p)
{
	int i,mask=3;
	
	for(i=0;i<5;i++){
		*p = *p & mask;
		mask = mask << 1;
		p++;
	}
}

