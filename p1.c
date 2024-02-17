// // sum positions
// #include<stdio.h>
// int main()
// {
//     int a[] = {4 , 5 , 2 , 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     int target = 7;
//     int f = 1;
//     int i , j;
//     for(i = 0 ; i < size ; i++)
//     {
//         for(j = i + 1 ; j < size ; j++)
//         {
//             if(a[i] + a[j] == target)
//             {
//                 printf("[%d , %d]",i,j);
//                 break;
//             }
//         }
//     }
//     return 0;
// }


// revese number

// #include<stdio.h>
// int main()
// {
//     int i , j , n , rev;
//     printf("enter n:");
//     scanf("%d",&n);
//     while(n!=0)
//     {    
//         rev = n % 10;
//         printf("%d",rev);
//         n = n / 10;
//     }
//     return 0;
// }