#include<stdio.h>

int operations(int*x,int*y)
{
    int A,B;
    A=*x+*y;
    printf("A=%d\n",A);
    B=*x-*y;
    printf("B=%d\n",B);
    return 0;
}
int main()
{
    int a=56,b=34;
    printf("A=%d and B=%d\n",a,b);
    operations(&a,&b);
    return 0;
}
