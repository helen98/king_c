// Computes the dimentional weight of a 
// box from input provided by the user

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume, weight;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}