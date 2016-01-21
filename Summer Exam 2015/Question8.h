#include <stdio.h>

// Question 8

int main() {
	int values[] = {1,11,9,2,5};
	
	printf("%i",f(values,5));
	
	system("PAUSE");
	return 0;
}

// Below is the function you are asked to write
f(int *p, int x)
{
	int i, max=0;
	
	for(i=0;i<x;i++){
		if(i==0){
			max = *p;
		}
		else if(*p > max){
			max = *p;
		}
		
		p++; // move to next position in array
	}
	
	return max;
}