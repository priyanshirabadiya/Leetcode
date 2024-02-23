#include<stdio.h>
int main()
{
    int i , j , n , a[50] , b[50] , c[100] , k;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        printf("enter Array first:");
        scanf("%d",&a[i]);
    }
    for(j = 0 ; j < n ; j++)
    {   
        printf("enter element of second array:");
        scanf("%d",&b[j]);
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
        c[i] = a[i];
    }
    k = i;
    printf("\n");
    for(j = 0 ; j < n ; j++)
    {
        printf("%d ",b[j]);
        c[k] = b[j];
        k++;
    }
    printf("\nMerged array is:");
    for(i = 0 ; i < 6 ; i++)
    {
        printf(" %d",c[k]);
    }
    return 0;
}