/*Resuelva las siguientes tareas mediante el uso de funciones:
i) Haga una función que devuelva el cuadrado de un número
ii) Haga la función anterior, pero devolviendo un tipo void
iii) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
iv) Dado dos parámetros de entrada, deberá invertir los valores entre ambos. void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el valor de a
v) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
vi) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada.*/


#include <stdio.h>
#include <stdlib.h>
#define N 5;

int cuadrado(int num1);
void cuadra2(int num1);
void puntero(int *p_num1);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);
void pares();

int main(){

	int num1, num2, x, *p_num1;

	p_num1=&num1;

	printf("escriba un numero: ");
	scanf("%d", &num1);

	x = cuadrado(num1);

	printf("mediamte la funcion con retorno, el cuadrado de %d es:%d \n",num1,x);

	cuadra2(num1);

	puntero(p_num1);

	printf("escriba otro numero: ");
	scanf("%d", &num2);

	invertir(&num1,&num2);

	ordenar(&num1,&num2);

	pares();

	return 0;
}



int cuadrado(int num1){

	int result;

		result= num1*num1;

		return result;
}
void cuadra2(int num1){

	 int result;
	 result = num1*num1;

	 printf("mediante la funcion sin retorno (void), el cuadrado de %d es:%d \n \n",num1,result);

}
void puntero(int *p_num1){

	printf("la direccion de memoria de la variable es:%p \n", p_num1);
	printf("el contenido de la variable es:%d \n \n", *p_num1);

}
void invertir(int *a, int *b){

	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	printf("los valores invertidos son: %d y %d \n",*a,*b);

}
void ordenar(int *a, int *b){

	int aux;

	if(*a > *b){

		aux = *a;
		*a = *b;
		*b = aux;
	}

	printf("los valores ordenados de menor a mayor son: %d y %d",*a,*b);
}
void pares(){

	int i,a,b;
	printf("ingrese 5 veces 2 pares de numeros: \n \n");

	for(i=0;i<N;i++){

		scanf("%d",&a);
		scanf("%d",&b);
		ordenar(a,b);

		if(i<N){

			printf("escriba el siguente par\n");

		}
		
	}
}


