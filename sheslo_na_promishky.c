#include <stdio.h>

int main(){
	float a,b,c;
	printf("Vvedite a,b,c:\na=");
	scanf("%f", &a);
	if((a > -5)  && (a < 8)){
	printf("a e (-5;8)\n");
	}else{
	printf("a ne e (-5,8)\n");
	}
	printf("b=");
	scanf("%f", &b);
	if((b > -5)  && (b < 8)){
	printf("b e (-5;8)\n");
	}else{
	printf("b ne e (-5,8)\n");
	}
	printf("c=");
	scanf("%f", &c);
	if((c > -5)  && (c < 8)){
	printf("c e (-5;8)\n");
	}else{
	printf("c ne e (-5,8)\n");
	}
	return 0;
}
