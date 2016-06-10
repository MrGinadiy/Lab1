#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main () 
{ 
int mas[10], i, suma = 0; 
srand(time(0)); 

for(i = 0; i < 30; i++) { 
mas[i] = (rand() % 20) - 10; 
printf("\nmas[%d] = %d", i, mas[i]); 
} 

for(i = 0; i < 10; i++) 
if((mas[i] % 3) == 0) 
suma += mas[i]; 

printf("\nSUMA = %d", suma); 

return 0; 
}
