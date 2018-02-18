#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float price, height, width, surfaceArea;
    int cans;

    printf("Enter the price of a individual 1 gallon paint can\n");
    scanf("%f", &price);
    printf("Enter the dimensions of the surface in feet\n");
    scanf("%f %f", &height, &width);

    if (price < 0 || height < 0 || width < 0)
    {
        printf("Error: Please use positive values\n");
    }

    surfaceArea = height * width * 4;
    cans = ceil(surfaceArea/400);
    printf("The number of paint cans needed are %d for a total of $%.2f\n", cans, price*cans);
    return 0;
}
