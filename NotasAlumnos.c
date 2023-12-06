#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double promedio(double notas[23][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 23; j++)
        {
            
        }
        
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
            notas[i][j] = rand() %10 + 1.0;
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
    promedio(double notas[23][3]);

    return 0;
}