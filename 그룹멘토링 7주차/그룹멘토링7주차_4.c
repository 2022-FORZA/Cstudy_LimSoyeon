#include <stdio.h>
#include <math.h>
/*น้มุ 25905*/
int main()
{
    float array[10] = {};
    int i, j;
    double result = 1.000000;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &array[i]);
    }

    for (i = 1; i <= 9; i++)
    {
        float max = 0.0;
        int maxidx = 0;
        for (j = 0; j < 10; j++)
        {
            if (array[j] > max)
            {
                max = array[j];
                maxidx = j;
            }
        }
        result *= max * 10 / (float)i;
        array[maxidx] = 0;
    }

    printf("%f\n", result);
}