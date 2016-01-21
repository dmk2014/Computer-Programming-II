#include <stdio.h>

// Question 7

f(char *p, char Start, char End);

int main(int argc, char *argv[]) {
	char a[] = {"Hello12 World34567!!???"};
	printf("val is %i\n",f(a,'A','Z'));
	printf("val is %i\n",f(a,'a','z'));
	printf("val is %i\n",f(a,'0','9'));
	
	system("PAUSE");
	return 0;
}

f(char *p, char Start, char End)
{
	int i, cnt=0, len=strlen(p);
	
	for(i=0;i<len;i++){
		if (*p >= Start && *p <= End)
			cnt++;
		p++;
	}
	
	return cnt;
}