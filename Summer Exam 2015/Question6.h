#include <stdio.h>

// Question 6

int main(void) {
	int i=0xface, j=4;
	
	fn(i,j);
	
	system("PAUSE");
	return 0;
}

fn(int a,int b)
{
	while(a>0){
		printf("%x\n",a);
		a = a >> b;
	}
}

