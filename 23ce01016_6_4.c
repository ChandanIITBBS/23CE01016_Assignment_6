#include<stdio.h>
int main()
{
    int n1,arr1[100],n2,arr2[100];
    printf("Enter no of integers in the First array: ");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        printf("Enter values: ");
        scanf("%d",&arr1[i]);
    }

    printf("Enter no of integers in the Second array: ");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        printf("Enter values: ");
        scanf("%d",&arr2[i]);
    }
    printf("First Array :\n");
    for(int i=0;i<n1;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nSecond Array :\n");
    for(int i=0;i<n2;i++){
        printf("%d\t",arr2[i]);
    }
    int value=0;
    for (int i=0; i<n2; i++){
        for (int j=0; j<n1; j++){
            if (arr2[i]==arr1[j]){
                value+=1;
                break;
            }
        }
    }
    if (value==n2){
        printf("\nSecond Array is a Subset of First Array.");
    }
    else
        printf("\nSecond Array is not a subset of First Array.");
    return 0;    
}