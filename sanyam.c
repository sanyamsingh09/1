#include<stdio.h>
#include"sanyam.h"
int main (){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    // print the factorial of number
    printf("factorial is %d\n",fac(n));

    // codition for strong or not
    if(strong(n)){
        printf("%d is strong number.\n",n);
    }else{
        printf("%d is not strong number.\n",n);
    }

    if (palid(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);


    return 0;
}