#include<stdio.h>

int Prime(int a);
int main()
{
    int num1, num2, n;
    printf("Enter lower limit: ");
    scanf("%d",&num1);
    printf("Enter upper limit: ");
    scanf("%d",&num2);

    for (n=num1; n<=num2; n++){
        Prime(n);
    }
    printf(" these are Prime numbers between %d-%d.",num1,num2);
    return 0;
}

int Prime(int a){
    int f=0;
    for (int i=1; i<=a; i++){
        if(a%i==0){
            f++;
        }
    }
    if (f==2){
        printf("%d, ",a);
        }
}