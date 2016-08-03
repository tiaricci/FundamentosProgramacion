#include <stdio.h>

int main(){
	char letra;
	printf("\nLas letras del abecedario en sentido inverso son: \n");
	for(letra = 'Z'; letra>='A'; letra--)
		printf("%c\t",letra);
	return 0;
}
