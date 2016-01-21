#include <stdio.h>
#include <string.h>

// Question 4

int main(void) {
	char a[]={"abcdefg"};
	
	f1(a);
	f2(a);
	
	system("PAUSE");
	return 0;
}

f2(char *p)
{
	int len=strlen(p),i;
	
	for(i=0;i<len-1;i++)
		p++;
	
	for(i=0;i<len;i++){
		printf("%c\n",*p);
		p--;
	}
}

f1(char *p)
{
	int len=strlen(p),i;
	
	for(i=0;i<len;i++){
		*p += 1;
		p++;
	}
}


