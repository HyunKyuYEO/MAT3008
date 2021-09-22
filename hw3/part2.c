#include <math.h>

float rtsafe(void (*funcd)(float, float *, float *), float x1, float x2, float xacc);
float bessj0(float x);
float bessj1(float x);
void bessj2(float x, float *i, float *k)
{
    *i = bessj0(x);
    *k = -bessj1(x);
}

float f1(float x)
{
    return 10 * exp(-x) * sin(2 * M_PI * x) - 2;
}

float f1diff(float x)
{
    return 10 * exp(-x) * (2 * M_PI * cos(2 * M_PI * x) - sin(2 * M_PI * x));
}

void part2()
{
    float x1 = 0.1;
    float x2 = 1;
    const float xacc = 1e-6;
    
    printf("Part2\n");
    printf("======problem1======\n");

    rtsafe(bessj2())
}