#include <stdio.h>

void sort(float *a, float *b, float *c);
void swap(float *a, float *b);

int main()
{
    float a, b, c;
    printf("��������ʵ��:");
    scanf("%f %f %f", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%f %f %f", a, b, c);
    if ((a + b) > c)
    {
        if ((a == b) && (b == c))
            printf("�ǵȱ�������");
        else if ((a == b) || (b == c))
            printf("�ǵ���������");
        else if ((a * a + b * b) == (c * c))
            printf("��ֱ��������");
        else
            printf("������������");
    }
    else
        printf("�������������");
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