#include<stdio.h>

int a;
int b;
int c;
int new_branch;

void main(){
	int d;
	a = 1;
	b = 200;
	d = a + b + b;

	new_branch = a + d;
	
	printf("the value of d is %d", d);

	printf("the new_branch value is %d", new_branch);
}
