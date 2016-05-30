#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Vvedite a,b,c:\na=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("c=");
	scanf("%f", &c);
	printf("Naibil`she chislo:");
	if((a > b) && (a > c)){
	printf("%.2f",a);
	}else{
	if((b > a) && (b > c)){
	printf("%.2f",b);
	}else{
	]		printf("%.2f",c);
	}
	}
	return 0;
}
