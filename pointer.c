#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main(void) 
// “void main()”的用法并不是任何标准制定的。
// C語言标准語法是“int main()”，任何实现都必须支持int main(void) { /* ... */ }和int main(int argc, char* argv[]) { /* ... */ }
// 来源：http://www.stroustrup.com/bs_faq2.html#void-main
{

    // int** pointer2 = NULL;
    // int* pointer=NULL;
    // int hahaha=10000;
    // pointer = &hahaha;
    // pointer2 = &pointer;
    // printf("pointer2 address:%p\n", &pointer2);
    // printf("pointer2 :%p\n", pointer2);
    // printf("pointer address:%p\n",&pointer);
    // printf("pointer:%p\n",pointer);
    // printf("hahaha address:%p\n",&hahaha);
    // printf("hahaha:%d\n",hahaha);
    // printf("*pointer:%i\n",*pointer);
    // printf("**pointer2:%i\n",**pointer2);
    // int room[10]={256,257,258,4,5,6,7,8,9,0};
    char *ptr = NULL; // 初始化指针ptr并指向空指针
    int len = 10; // 分配空间的大小
    int i = 0; // 字符计数器
    ptr = (char *)malloc(sizeof(char) * len); // 用malloc分配一个sizeof(char) * len长度的空间并把ptr指向这个空间的首地址
    char ch; // 用于临时接收一个字符
    while ((ch = getchar()) != '\n') // 如果接收到的不是回车则循环
    {
        if (i == len - 1) // 这个if里面是给空间扩容的
        {
            len *= 2; // 每次把长度翻倍
            char *newptr = NULL; // 定义一个新的指针并指向空指针
            newptr = (char *)malloc(sizeof(char) * len); // 分配一个两倍于老数组长度的空间并把新指针指向这个空间的首地址
            strcpy(newptr, ptr); // 拷贝老数组数据到新数组
            char *tmp = ptr; // 临时存放老数组的首地址，也就是老指针，后面用于释放
            ptr = newptr; // 老指针指向新数组
            free(tmp); // 释放原来的空间
        }
        *(ptr + i) = ch;
        i++;
    }
    // ptr = room;
    printf("*ptr:%d\n", *ptr);
    // printf("room[0] address :%p\n",&room[0]);
    // printf("room address :%p\n",&room);
    // printf("room[0] :%d\n",room[0]);
    printf("*ptr:%d\n", *ptr);

    printf("sizeof int:%d\n", sizeof(int));
    printf("sizeof char:%d\n", sizeof(char));
    int j = 0;
    for (j = 0; j < i; j++)
    {
        // printf("room[%d]=%d\n",i,room[i]);
        // printf("ptr[%d]:%d\n",i,ptr[i]);
        // printf("ptr[%d]:%d\n",i,*ptr++);
        printf("ptr[%d]:%c\n", j, *ptr);
        ptr++;
    }

    return 0;
}
