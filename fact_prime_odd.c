#include<stdio.h>

int main()
{
    int choice,num,fact,i;
    while(1)
    {
        printf("-----MENU-----\n");
        printf("1.Factorial\n2.Prime\n3.Odd/Even\n4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                printf("Enter the number:\n");
                scanf("%d",&num);
                fact=1;
                for(i=1;i<=num;i++)
                {
                    fact=fact*i;
                }
                printf("Factorial of %d=%d\n",num,fact);
            break;
        case 2:
                printf("Enter the number:\n");
                scanf("%d",&num);
                for(i=2;i<num;i++)
                {
                    if(num%i==0)
                    {
                        printf("%d is not a prime number.\n",num);
                        break;
                    }
                }
                if(i==num)
                    printf("%d is a prime number.\n",num);
                    break;
        case 3:
                 printf("Enter the number:\n");
                 scanf("%d",&num);
                 if(num%2==0)
                 {
                     printf("%d is a even number.\n",num);
                 }
                 else
                 printf("%d is a odd number.\n",num);
                 break;
        
        default:
        printf("Wrong choice!!\n");
            break;
        }
    }
    return 0;
}