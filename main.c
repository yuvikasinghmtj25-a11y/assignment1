#include<stdio.h>
#include"mylib.h"
int main(){
    int choice,num;
    do{
        printf("\n==Menu==\n");
        printf("1.check armstrong number\n");
        printf("2.check adams number\n");
        printf("3.check prime palindrome number\n");
        printf("4.exit\n");
        printf("enter your choice: ");
        scanf("%d,&choice");
        if(choice==4)break;
        printf("enter a number:");
        scanf("%d",&num);
        switch(choice){
            case 1:
            if(isArmstrong(num))
            printf("%d is an Armstrong number\n",num);
            else
            printf("%d is not an Armstrong number\n",num);
            break;
            case 2:
            if(isAdams(num))
            printf("%d is Adams number\n",num);
            else
            printf("%d is not an Adams number\n",num);
            break;
            case 3:
            if(isPrimePalidrome(num))
            printf("%d is a Prime Palidrome number\n",num);
            else("%d is not a prime palidrome number\n",num);
            break;
            default:
            printf("invalide choice")
        }
    }while(choice!=4);
    printf("end profram");
    return 0;
}