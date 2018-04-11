#include<stdio.h>

int a;
int b;
int c;
int new_branch;

void main(){
	int f;
	a = 1;
	b = 200;
	f = a + b + b;

	new_branch = a + f;
	
	printf("the value of f is %d\r\n", f);

	printf("the new_branch value is %d\r\n", new_branch);
}
