#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float numero = 0;
	const int NUMERO_CUBO = 3;
	float resultado;
	
	printf("Ingrese un valor numerico: ");
	scanf("%f", &numero);
	
	resultado = pow(numero, NUMERO_CUBO);
	
	if (numero != 0) {
		printf("\nEl resultado de la operacion es: %.0f", resultado);
	} else {
		printf("\nEl numero ingresado tiene que ser mayor a 0");
	}
	

	return 0;
}
