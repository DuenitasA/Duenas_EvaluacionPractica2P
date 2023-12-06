#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double promedio(double notas[23][3])
{

    double suma[23];
    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; i < 3; j++)
        {

            suma[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        }
    }
    for (int i = 0; i < 23; i++)
    {
        printf("%.1f\t", suma[i]);
    }
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

    return 0;
}