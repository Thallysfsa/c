  #include <stdio.h>
int main() {
	int x, y;

	printf("Digite um numero inteiro: ");
  	scanf("%i", &x);
  
  	printf("Digite um numero inteiro: ");
  	scanf("%i", &y);

   if (x > y){
  		printf("valor %i é maior que %i", x,y);
  	}

 	else {
 		printf("valor %i é maior que %i", y,x);
 	}
 
 	return 0;
 
 }
