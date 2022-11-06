# 期中考试复习

## 题目1

实验题目（1）【见实验教材实验二的题目6】：编程序`exp2_6.c`,读入3个double型变量a,b,c的值，用if语句判断他们能否构成三角形，如果能构成三角形又是构成的何种三角形（等边三角形、直角三角形、等腰三角形、一般三角形）？输出各种情况下判断的结果。（建议参考实验指导教材的流程图4.20，先对a,b,c进行由小到大的排序可以简化代码）

<details>
<summary>答案</summary>

```C
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
```

</details>