#include <stdio.h>
#include <math.h>//Incluyo este header para usar Pow 

//Compilar: Primero convierte el código en assembler y luego usa el linker, usa el código fuente con otros códigos para que pueda funcionar. Linker busca los archivos necesarios y los ejecuta

float calcula_imc(float,float); //prototipo de la función

int main(int argc, char const *argv[])
{
    float estatura, peso, imc;
    char Nombre[30];

    printf("Ingrese su nombre\n");
    fgets(Nombre, 30, stdin);  //Lee el texto de un archivo

    printf("Ingrese su peso\n");
    scanf("%f" ,&peso); //lee del teclado y lo convierte al formato

    printf("Ingrese su estatura\n");
    scanf("%f" ,&estatura);  //%f es float

    //IMC = Peso / estatura^2

    imc= calcula_imc(peso, estatura);  //Llama a la función
    

    printf("%s su IMC es = a %f\n" ,Nombre,imc);



    printf("Sistemas computacionales 2024\n");
    return 0;
}

float calcula_imc(float peso,float estatura) //Esto es una variable (No lleva ;)
{
    float IMC;

    IMC = peso / pow(estatura, 2);
    return IMC;
    
}