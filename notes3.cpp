#include<stdio.h>
int main()
{
    int num;
    int* ptr_num;

    num = 5;
    ptr_num = &num;

    printf("Value of num : %d\n",num);
    printf("Value of ptr_num : %d\n",ptr_num);
    printf("Value of ptr_num : %d\n",&num);
}