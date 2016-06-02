#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	float x;
	printf("Skolko vremeni?\n");
	scanf("%f",&x);
	if((x >= 0) && (x <= 6)){
		printf("Dodroy nochi");
	}else{
		if((x > 6) && (x <= 12)){
			printf("Dobroe ytro");
		}else{
			if((x > 12) && (x <= 18)){
				printf("Dobrogo dnya");
			}else{
				if((x > 18 )&& (x <= 24)){
					printf("Dobrogo vechera");
				}
			}
		}
	}
}
		
	return 0;
}
