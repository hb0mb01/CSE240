#include<stdio.h>
#define subm(a,b) (a-b)
#define cubem(a) (a*a*a)
#define minm(a,b) ((a<b)?(a):(b))
#define oddm(a) ((a%2 == 0)? 0:1)

int subf(a, b) {
	return a - b;
}
int cubef(int a) {
	return a * a * a;
}
int minf(int a, int b) {
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}
int oddf(int a) {
	if (a % 2 == 1) {
		return 1;
	}
	else {
		return 0;
	}}
int main()
{
	int a = 3, b = 6;
	int c = subf(a, b);
	printf("subf(a,b) = %d \n", c);
	c = subm(a, b);
	printf("subm(a,b) = %d \n", c);
	c = subf(a++, b--);
	printf("subf(a++,b--) = %d \n", c);
	a = 3; b = 6; // reset a,b values
	c = subm(a++, b--);
	printf("subm(a++,b--) = %d \n", c);

	a = 3; b = 6;
	c = cubef(a);
	printf("cubef(a) = %d \n", c);
	c = cubem(a);
	printf("cubem(a) = %d \n", c);
	c = cubef(--a);
	printf("cubef(--a) = %d \n", c);
	a = 3; b = 6;
	c = cubem(--a);
	printf("cubem(--a) = %d \n", c);

	a = 3; b = 6;
	c = minf(a, b);
	printf("minf(a,b) = %d \n", c);
	c = minm(a, b);
	printf("minm(a,b) = %d \n", c);
	c = minf(--a, --b);
	printf("minf(--a, --b) = %d \n", c);

	a = 3; b = 6;
	c = minm(--a, --b);
	printf("minm(--a, --b) = %d \n", c);

	a = 2; b = 6;
	c = oddf(a);
	printf("oddf(a) = %d \n", c);
	c = oddm(a);
	printf("oddm(a) = %d \n", c);
	c = oddf(a++);
	printf("oddf(a++) = %d \n", c);
	a = 2; b = 6;
	c = oddm(a++);
	printf("oddm(a++) = %d \n", c);
}