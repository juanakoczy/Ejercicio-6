//Escriba una función que calcule la suma y el producto de dos números enteros utilizando
// punteros y luego los muestre por pantalla.

#include <stdio.h>
int prod (int *n1, int *n2)
{
    int r =(*n1)*(*n2);
    return r;
}
int suma (int *n1, int *n2)
{
 int r=(*n1)+(*n2);
 return r;
}

int main() {
    int a=5,b=2;

    printf ("Los numeros son %d, %d\n",a,b);
    int resultado = suma(&a,&b);
    printf ("La suma es: %d\n",resultado);
    int result = prod(&a,&b);
    printf ("El producto es: %d\n",result);

    return 0;
}
