// remove entered element from array
// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]

#include<stdio.h>
int main()
{
    int i , j , a[50] , f , n;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
    {
        printf("enter array:");
        scanf("%d",&a[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nenter element to remove:");
    scanf("%d",&f);
    printf("\nElement after removeing array is:");
    for(i = 0 ; i < n ; i++)
    {
        if(a[i] == f)
        {
            continue;
        }
        else
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}