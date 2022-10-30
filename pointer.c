#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main(void)
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
    char *ptr=NULL;
    int len =10;
    int i=0;
    ptr=(char*)malloc(sizeof(char)*len);
    char ch;
    while((ch=getchar())!='\n')
    {
        if (i==len-1)
        {
            len*=2;
            char* newptr = NULL;
            newptr = (char*)malloc(sizeof(char)*len);
            strcpy(newptr, ptr);
            char* tmp = ptr;
            ptr = newptr;
            free(tmp);
        }
        *(ptr+i) = ch;
        i++;

    }
    // ptr = room;
    printf("*ptr:%d\n",*ptr);
    // printf("room[0] address :%p\n",&room[0]);
    // printf("room address :%p\n",&room);
    // printf("room[0] :%d\n",room[0]);
    printf("*ptr:%d\n",*ptr);
    
    printf("sizeof int:%d\n",sizeof(int));
    printf("sizeof char:%d\n",sizeof(char));
    int j=0;
    for (j=0;j<i;j++)
    {
        // printf("room[%d]=%d\n",i,room[i]);
        // printf("ptr[%d]:%d\n",i,ptr[i]);
        // printf("ptr[%d]:%d\n",i,*ptr++);
        printf("ptr[%d]:%c\n",j,*ptr);
        ptr++;
    }

    return 0;
}

