var removeDuplicates = function(nums) {
    let uniqueNums = [];
    
    for (let num of nums) {
        if (!uniqueNums.includes(num)) {
            uniqueNums.push(num);
        }
    }
    
    return uniqueNums;
}

let nums = [1, 2, 1, 3];
console.log(removeDuplicates(nums));
