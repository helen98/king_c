// Computes the volume of a sphere 

#include <stdio.h>

#define VOLUME_FACTOR 4.0f/3.0f
#define PI 3.14159265359f

int main(void)
{
    float radius;
    float volume;
    
    printf("Radius = ");
    scanf("%f", &radius);
    printf("Volume of a sphere = %.2f\n", VOLUME_FACTOR * PI * radius * radius * radius);
}