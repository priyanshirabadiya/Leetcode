
// 7. Reverse Integer
/*Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21*/

#include<stdio.h>
int main()
{
    int i , j , n , rev = 0 , re;
    printf("enter n:");
    scanf("%d",&n);
    while(n!=0)
    {    
        re = n % 10;
        rev = rev * 10 + re;
        n = n / 10;
    }
        printf("%d",rev);
    return 0;
}


// int reverse(int x){
//     double rev = 0 , reminder ;
 
//     while(x!=0)
//     {    
//         reminder = x % 10;
//         rev = rev * 10 + reminder;
//         x = x / 10;
//     }
//        return rev;
// }

// int main()
// {
//     int n;
//      printf("enter n:");
//     scanf("%d",&n);
//     reverse(n);
// }