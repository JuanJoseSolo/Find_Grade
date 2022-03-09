////////////////////////////////////////////////////////////////////////////////////
// REPASO C
// Fecha: 01/marzo/2022 
// Tema: Tipo de datos y primeros pasos con el compilador gcc.
///////////////////////////////////////////////////////////////////////////////////




#include <stdlib.h>
#include <stdio.h>
#include <limits.h> //concer los rangos de valores para los datos primitivos.
#include <float.h> // conocer los rangos de valores para los puntos flotantes.
#include "grados.c"  
#define bitsOnchar CHAR_BIT //variable declarada en: limits.h 


//ENUM
enum colors
{
    red, green, blue
}colores;
int main()
{

    //datos primitivos 
    char ac, bc, cc; //El tipo char se utiliza para declarar datos enteros comprendidos entre -128
    // y -127
    int ai, bi, ci;
    double ad, bd, cd;
    long al, bl, cl;

    float af, bf, cf;
    short as, bs, cs;
    signed char singedChar;
    unsigned char unsignedChar;

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
                // Trabajando con char


    printf("Numero de bits que ocupa una variable tipo chart %d", bitsOnchar);

    char letra_a = 'a';
    char letra_a_decimal = 97;
    char letra_a_hexadecimal = 0x61;
    char letra_a_octal = 0141;
    char UnknownLetter = 00000005; //codigo ascci 

    printf("\nLetra a: %c", letra_a);
    printf("\nLetra a: %c", letra_a_decimal);
    printf("\nLetra a: %c", letra_a_hexadecimal);
    printf("\nLetra a: %c\n", letra_a_octal);
    printf("\nLetra a: %c\n", UnknownLetter);

    
    
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
                                //SUMA DE DOS VALORES
    ai = 1;
    bi = 2;
    ci = ai+bi;
    printf("\nSUMA\n");
    printf("%d + %d = %d ", ai,bi,ci);
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    enum colors color;
    color = blue;
    printf("\nThe variable type enum have as blue idex : %d ", color);

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

float data =  Convertir(45);
printf("%10.3d C = ", data);

return 0;
}