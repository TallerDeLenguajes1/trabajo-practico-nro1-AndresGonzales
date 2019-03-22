/*i) Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y devuelva por pantalla:
(1) El contenido del puntero
(2) La dirección de memoria almacenada por el puntero.
(3) la dirección de memoria de la variable.
(4) la dirección de de memoria del puntero.
(5) el tamaño de memoria utilizado por esa variable usando la función
sizeof()
Nota. Si resolvió correctamente los puntos 2 y 3 notará que el resultado es el mismo. 
¿a qué se debe? ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?*/

#include <stdio.h>
#include <stdlib.h>


int main(){

	int var = 5;
	int *p_var;
	p_var = &var;

	printf("contenido del puntero: %d \n", *p_var);
	printf("direccion de memoria almacenada por el puntero: %p \n", p_var);
	printf("direccion de memoria de la variable: %p \n", &var);
	printf("direccion de memoria del puntero: %p \n", &p_var);
	printf("tamaño de memoria usado por la variable: %lu \n",sizeof(var));

	return 0;
}

	/* Los puntos 2 y 3 dan el mismo resultado porque "p_var" guarda la posicion de memoria de la variable "var".

		En el punto 4 obtengo la direccion de memoria de mi variable *p_var, que es mi puntero.

		La direccion de memoria de mi puntero no es igual a la direccion de memoria a la que apunta 
		(en este caso, la de mi variable "var"), pues el valor de "*p_var" y de "var" se guardan en posiciones de memoria distintas.*/