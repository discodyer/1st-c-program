#include <stdio.h>

void sort(float *a, float *b, float *c);
void swap(float *a, float *b);

int main()
{
    float a, b, c;
    printf("输入三个实数:");
    scanf("%f %f %f", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%f %f %f", a, b, c);
    if ((a + b) > c)
    {
        if ((a == b) && (b == c))
            printf("是等边三角形");
        else if ((a == b) || (b == c))
            printf("是等腰三角形");
        else if ((a * a + b * b) == (c * c))
            printf("是直角三角形");
        else
            printf("是其他三角形");
    }
    else
        printf("不能组成三角形");
}

void sort(float *a, float *b, float *c)
{
    if ((*a) > (*b))
    {
        swap(a, b);
    }
    if ((*a) > (*c))
    {
        swap(a, c);
    }
    if ((*b) > (*c))
    {
        swap(b, c);
    }
}

void swap(float *a, float *b)
{
    float c = (*a);
    (*a) = (*b);
    (*b) = c;
}