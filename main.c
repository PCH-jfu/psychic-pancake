#include<stdio.h>

int a;
int b;
int c;
int new_branch;

void main(){
	int d;
	a = 1;
	b = 200;
	c = 3;
	d = a + b + c;

	new_branch = a + d;
	
	printf("the value of d is %d", d);

	printf("the new_branch value is %d", new_branch);
}
