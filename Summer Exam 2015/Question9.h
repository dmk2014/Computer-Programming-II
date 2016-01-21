#include <stdio.h>

// Question 9

int main() {
	int i, reverse, tempNum;
	
	for(i=0;i<=1000;i++){
		reverse = 0;
		tempNum = i;
		
		while(tempNum > 0){
			reverse = reverse * 10;
			reverse = reverse + tempNum % 10;
			tempNum = tempNum/10;
		}
		
		if(i == reverse){
			printf("%i\n",i);
		}
	}
	
	system("PAUSE");
	return 0;
}

