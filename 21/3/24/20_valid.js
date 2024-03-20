// 20. Valid Parentheses

/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/

function myfun(string) {
    let arr = []
    let obj = {
        '(' : ')',
        '[':']',
        '{':'}'
    }
    for(let x of string){
    if(x in obj){
            arr.push(x)
        }else{
            let a = arr.pop()
            if(obj[a] != x){
                return false
            }
        }
    }
    return arr.length == 0
 }
 const string = "[]"
 console.log("Input string:", string);
 console.log("Result:", myfun(string));

 