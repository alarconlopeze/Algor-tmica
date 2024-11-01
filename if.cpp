#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, promedio;

    printf("Ingrese su primera calificacion: ");
    scanf("%f", &nota1);
    printf("Ingrese su segunda calificacion: ");
    scanf("%f", &nota2);
    printf("Ingrese su tercera calificacion: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7)
    {
        printf("\nAPROBADO");
    }
    else
    {
        printf("\nREPROBADO");
    }

    return 0;
}