#include<stdio.h>
void Average();
int main()
{
    int arr[10],n;
    printf("Enter no of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter values :");
        scanf("%d",&arr[i]);
    }
    printf("The entered array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    Average(arr,n);
    return 0;    
}

void Average(int a[], int n){

    int sum=0;
    int newarr[100];
    int j=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int avg = sum/n;
    printf("\nAverage = %d.\n",avg);
    for(int i=0;i<n;i++){
        if (a[i]>avg){
            newarr[j]=a[i];
            j++;
        }
    }
    printf("Values that are greater than the average of the elements of the array :\n");
    for(int i=0;i<j;i++){
        printf("%d\t",newarr[i]);
    }
}