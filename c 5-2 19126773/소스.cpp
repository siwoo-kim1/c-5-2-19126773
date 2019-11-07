#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double a;
	double b;

	printf("킬로그램을 입력해주세요.: ");
	scanf("%lf", &a);
	b = a * 2.204623;

	printf("%f는 %.3f(pound)이다.", a, b);

}

