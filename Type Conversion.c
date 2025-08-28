#include<stdio.h>
int main() {
	int a=5, b=12;
	float c, d, e;
	e= b/a;
	c=(float)b/a;
	d=(float)(b/a);
	printf("Explicit type conversion=%f\n", c);
	printf("Explicit type conversion=%f\n", d);
	printf("Implicit type conversion=%f\n", e);
}
