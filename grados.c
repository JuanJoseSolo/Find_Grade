//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
// Paso de grados Centígrados a Fahrenheit (F = 9/5*C+32)
// grados.c
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

// Directrices para el procesador 
# include<stdio.h> //  declaraciones de funciones estándar de entrada y salida de C.

// Definición de constantes 
# define INF -30 // Límite inferior del intervalo de Centígrados.
# define SUP 100 // Límite superior.

// Declaración de funciones 
 // Prototipo de la función.
float Convertir(int c);

int main() // función principal -comienzo del programa
{
    // Declaración de variables locales.
    int nGradosCentigrados = 0; 
    int incremento = 6; 
    float GradosFahrenheit = 0;

    nGradosCentigrados = INF; // sentencia de asignación.
    
    while(nGradosCentigrados <= SUP)
    {
        // Se llama a la función convertir.
        GradosFahrenheit = Convertir(nGradosCentigrados);

        printf("%10d C %10.2f F\n", nGradosCentigrados, GradosFahrenheit);
        
         // Siguiente valor a convertir
        nGradosCentigrados += incremento;

    }
return 0;
} // Fin de la función principal y del programa

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//      DEFINICIÓN DE LA FUNCIÓN CONVERTIR
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-++-

float Convertir(int gCent)
{
    // Declaración de las variables locales.
    float gFahr;
    gFahr = (float)9 / (float)5 * gCent - 32;
    return gFahr;

}


