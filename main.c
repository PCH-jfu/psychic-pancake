#include<stdio.h>

int a;
int b;
int c;
int new_branch;

void main(){
	int d;
	int f;
	a = 1;
	b = 200;
	d = a + b + b;

	new_branch = a + d;
	
	printf("the value of d is %d\r\n", d);

	printf("the new_branch value is %d\r\n", new_branch);

	printf("we don't use f\r\n");
}
