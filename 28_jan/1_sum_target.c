// 1. Two Sum
// sum positions
#include<stdio.h>
int main()
{
    int a[] = {4 , 5 , 2 , 1};
    int size = sizeof(a) / sizeof(a[0]);
    int target = 7;
    int f = 1;
    int i , j;
    for(i = 0 ; i < size ; i++)
    {
        for(j = i + 1 ; j < size ; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("[%d , %d]",i,j);
                break;
            }
        }
    }
    return 0;
}

