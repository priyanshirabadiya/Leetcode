// 27. Remove Element
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



/*var removeElement = function(nums, val) {
    let index = 0; // Initialize index to 0
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] !== val) {
            // If the current element is not equal to the value to remove
            // Copy it to the next available position in the array
            nums[index] = nums[i];
            index++; // Move to the next position
        }
    }
    return index; // Return the new length of the array
};

// Test cases
let nums1 = [3, 2, 2, 3];
let val1 = 3;
console.log(removeElement(nums1, val1)); // Output: 2 (the new length of the array)

let nums2 = [0, 1, 2, 2, 3, 0, 4, 2];
let val2 = 2;
console.log(removeElement(nums2, val2)); // Output: 5 (the new length of the array)
*/