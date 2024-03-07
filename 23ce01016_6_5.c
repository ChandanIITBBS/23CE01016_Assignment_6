#include<stdio.h>

void Transpose(int a[100][100], int row, int column);
int max(int a, int b);
int main()
{
    int arr[100][100],row,column;
    printf("Enter no of rows in the array: ");
    scanf("%d",&row);
    printf("Enter no of columns in the array: ");
    scanf("%d",&column);
    for(int i=0;i<row;i++){
        for (int j=0; j<column; j++){
            printf("Enter a[%d][%d] of the matrix: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Array :\n");
    for(int i=0;i<row;i++){
        for (int j=0; j<column; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    Transpose(arr,row,column);

    printf("Transposed Array :\n");
    for(int i=0;i<column;i++){
        for (int j=0; j<row; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void Transpose(int a[100][100], int row, int column){
    for (int i=0; i<max(row,column); i++){
        for (int j=0; j<i; j++){
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}

int max(int a, int b){
    if (a>=b){
        return a;
    }
    else
        return b;
}
