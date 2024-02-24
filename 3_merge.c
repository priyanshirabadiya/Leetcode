// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

#include<stdio.h>
int main()
{
    int i , j , n , a[50] , b[50] , c[100] , k , temp;
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
    printf("\n");
    for(j = 0 ; j < n ; j++)
    {
        printf("%d ",b[j]);
        c[i++] = b[j];
    }
    printf("\nMerged array is:");
    for(i = 0 ; i < n + n ; i++)
    {
        printf(" %d",c[i]);
    }
    for(i = 0 ; i < n + n ; i++)
    {
        for(j = 0 ; j < (n + n) - i ; j++)
        {
            if(c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\nsorted array is:\n");
    for(j = 0 ; j < n + n; j++)
    {
        if(c[j]==0)
        {
            continue;
        }
        else
        {
            printf(" %d",c[j]);        
        }
    }
    return 0;
}