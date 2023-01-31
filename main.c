#include<stdio.h>
int add(int num1, int num2);
int main()
{
    
    printf("sum = %d \n", add(1,3));
    return 0;
}
int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
