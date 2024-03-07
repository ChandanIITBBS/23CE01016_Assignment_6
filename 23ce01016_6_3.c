#include<stdio.h>

void Reverse(int a[], int s, int l);

int main()
{
    int arr[100],n;
    printf("Enter no of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter values: ");
        scanf("%d",&arr[i]);
    }
    printf("Orginal array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    Reverse(arr,0,n-1);
    printf("\nReversed Array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

void Reverse(int a[], int s, int l){
    if (s >= l)
        return;
    int temp = a[s];
    a[s] = a[l];
    a[l] = temp;
    Reverse(a, s+1, l-1);

}
