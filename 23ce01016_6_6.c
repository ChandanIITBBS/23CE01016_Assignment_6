#include<stdio.h>

void Average(int a[][7], int c);
int main()
{
    int arr[100][7],city;
    printf("Enter no of cities: ");
    scanf("%d",&city);
    for(int i=1; i<=city;i++){
        for (int j=1; j<=7; j++){
            printf("Enter a[%d][%d] of the matrix: ",i,j);
            scanf("%d",&arr[i-1][j-1]);
        }
    }
    printf("Temperatures for the whole week :\n");
    for(int i=0;i<city;i++){
        for (int j=0; j<7; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    Average(arr,city);
    return 0;
}

void Average(int a[][7], int c){
    int j=0;
    float newarr[c];
    for(int i=0;i<c;i++){
        float sum=0, avg=0;
        for(int j=0; j<7; j++){
            sum+=a[i][j];
        }
        avg = sum/7.0;
        newarr[i]=avg;

    }

    
    printf("The average temperature of the whole week :\n");
    for(int i=0; i<c; i++){
        printf("%.2f\t",newarr[i]);
    }
}