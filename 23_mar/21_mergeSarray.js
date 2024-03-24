// Definition for singly-linked list.
class ListNode {
    constructor(val, next) {
        this.val = (val === undefined ? 0 : val);
        this.next = (next === undefined ? null : next);
    }
}

var mergeTwoLists = function(list1, list2) {
    // Create a dummy node to simplify the code
    let dummy = new ListNode();
    let current = dummy;

    while (list1 !== null && list2 !== null) {
        if (list1.val < list2.val) {
            current.next = list1;
            list1 = list1.next;
        } else {
            current.next = list2;
            list2 = list2.next;
        }
        current = current.next;
    }

    // If one list is longer than the other, append the remaining nodes
    if (list1 !== null) {
        current.next = list1;
    }

    if (list2 !== null) {
        current.next = list2;
    }

    return dummy.next;
};

// Function to print the linked list
function printLinkedList(head) {
    let current = head;
    let result = '';
    while (current !== null) {
        result += current.val + ' ';
        current = current.next;
    }
    result += '';
    console.log(result);
}

// Test case
let list1 = new ListNode(1);
list1.next = new ListNode(2);
list1.next.next = new ListNode(4);

let list2 = new ListNode(1);
list2.next = new ListNode(3);
list2.next.next = new ListNode(4);

console.log("List 1:");
printLinkedList(list1);
console.log("List 2:");
printLinkedList(list2);

let mergedList = mergeTwoLists(list1, list2);
console.log("Merged List:");
printLinkedList(mergedList);
