#include <stdio.h>

// Question 3

int main(void) {
	int a=0xfa, b=0xe4,c;
	
	c=f1(&a,&b);
	printf("Value is %x\n",c);
	
	system("PAUSE");
	return 0;
}

f1(int *p1, int *p2)
{
	int x = ((*p1&*p2)|1)^*p1;
	
	return x;
}


