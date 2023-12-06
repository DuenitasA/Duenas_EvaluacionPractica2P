#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double promedio(double notas[23][3], int estudiante)
{
    double suma = 0.0;

    for (int j = 0; j < 3; j++)
    {
        suma += notas[estudiante][j];
    }

    return suma / 3.0;
}

double progreso(double notas[23][3], int progreso)
{
    double suma = 0.0;

    for (int i = 0; i < 23; i++)
    {
        suma += notas[i][progreso];
    }

    return suma / 23.0;
}

int main(void)
{
    srand(time(NULL));
    double notas[23][3];

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            notas[i][j] = rand() % 10 + 1.0;
        }
    }

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f\t", notas[i][j]);
        }
        printf("\n");
    }

    printf("\nPromedio de cada alumno:\n");

    for (int i = 0; i < 23; i++)
    {
        double promedio_estudiante = promedio(notas, i);
        printf("Estudiante %d: %.2f\n", i + 1, promedio_estudiante);
    }

    printf("\nPromedio de cada progreso:\n");
    for (int j = 0; j < 3; j++)
    {
        double promedio_progreso = progreso(notas, j);
        printf("Progreso %d: %.1f\n", j + 1, promedio_progreso);
    }
    return 0;
}
